#pragma once

#include "stdafx.h"

enum AppMsg
{
	kAM_Init = WM_APP + 10,
	kAM_ShowTaskMsg,		// ��ʾ����ͼ��
	kAM_ExitForPop,			// �����Ҽ��˵����˳���Ϣ
	kAM_MainForPop,			// �����Ҽ��˵� ��������
	kAM_BeginForPop,		// �����Ҽ��˵� ��ʼ
	kAM_EndForPop,			// �����Ҽ��˵� ֹͣ
};