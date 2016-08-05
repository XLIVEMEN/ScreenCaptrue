// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//

#pragma once

#include "targetver.h"

#define WIN32_LEAN_AND_MEAN             // Exclude rarely-used stuff from Windows headers
// Windows Header Files:
#include <windows.h>
#include "..\third_party\duilib\UIlib.h"
#include "..\third_party\duilib\Utils\UIWnd.h"
#include "..\third_party\duilib\Utils\UICrack.h"

using namespace DuiLib;
// C RunTime Header Files
#include <stdlib.h>
#include <malloc.h>
#include <memory.h>
#include <tchar.h>


// TODO: reference additional headers your program requires here
#ifdef NDEBUG
#	pragma comment(lib, "duilib.lib")
#else
#	pragma comment(lib, "duilib.lib")
#endif
