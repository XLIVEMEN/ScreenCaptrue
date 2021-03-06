#ifndef __HOOK_H__
#define __HOOK_H__

#include "call_ivga_hook.h"
//#include "common_defs.h"

#pragma comment(lib, "ivga_hook.lib")

enum FastKey
{
	FastKey
};

class IVGAHook
{
public:
	IVGAHook() : viewer_(nullptr){
		process_id_ = GetCurrentProcessId();
		
		enable_shortcut_key_ = false;
	}
	void SetViewer(HWND hwnd){
		viewer_ = hwnd;
	}
	bool SetIvgaKeyboardHook(){
		IvgaFunc callback_func = std::bind(&IVGAHook::HookKeyboardCallBack, this, std::placeholders::_1, std::placeholders::_2, std::placeholders::_3);
		return SetKeyboardHook(callback_func, Keyboard_Hook);
	}
	bool UnIvgaKeyboardHook(){
		UnKeyboardHook();
	}
	void SetIvgaInterceptMsg(bool intercept = true, bool keyboard_control = false, bool keyboard_enable_shortcut_key = false){
		if (!keyboard_control){
			InterceptMsg(intercept);
			enable_shortcut_key_ = intercept;
		}else{
			InterceptMsg(true);
			enable_shortcut_key_ = keyboard_enable_shortcut_key;
		}
	}
	BOOL HookKeyboardCallBack(int code, WPARAM wparam, LPARAM lparam)
	{
//		debugPrintf(_T("KEY_call\n"));
		DWORD keyboard_msg = wparam;
		KBDLLHOOKSTRUCT* keyboard_info = (KBDLLHOOKSTRUCT*)lparam;
		DWORD process_id;
		HWND hwnd = GetForegroundWindow();
		GetWindowThreadProcessId(hwnd, &process_id);
		if (process_id_ != process_id){
//			debugPrintf(_T("KEY_return\n"));
			return TRUE;
		}
		if (!enable_shortcut_key_ && keyboard_info->vkCode != 0x23)
		return TRUE;
		HWND focus_hwnd = GetFocus();
		wchar_t class_name_buf[128];
		GetClassName(focus_hwnd, class_name_buf, 128);

		if (keyboard_msg == WM_KEYUP){

			if (1 == HIBYTE(GetKeyState(VK_LCONTROL)) >> 7)
//				debugPrintf(_T("KEY_ctrl_up\n"));

			if (1 == HIBYTE(GetKeyState(VK_LCONTROL)) >> 7
				&& (keyboard_info->vkCode == 0x5a
				|| keyboard_info->vkCode == 0x58)){
				if (viewer_)
					::PostMessage(viewer_, FastKey, keyboard_info->vkCode, 0);
//				debugPrintf(_T("KEY_post\n"));
			}
		}
		return TRUE;
	}
private:
	DWORD process_id_;
	HWND viewer_;
	bool enable_shortcut_key_;
};

#endif // !__HOOK_H__
