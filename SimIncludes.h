#pragma once

#if defined(_M_X64) || defined(__amd64__)
#define PWORDX unsigned __int64
#define	PUSERDATA	UINT_PTR
#define P3Dv4 1
#else
#define PWORDX DWORD
#define	PUSERDATA	UINT32
#endif

#if defined P3Dv4
#include "inc\gauges.p3d.x64.h"
#else
#include "inc\gauges.fsx.h"
#endif

#if defined P3Dv4
#include "inc\SimConnect.P3D.x64.h"
#else
#include "inc\SimConnect.fsx.h"
#endif

#if defined P3Dv4
#ifdef _DEBUG
#pragma comment(lib, "inc\\SimConnect.P3D.x64.Debug.lib")
#else
#pragma comment(lib, "inc\\SimConnect.P3D.x64.Release.lib")
#endif
#else
#pragma comment(lib, "inc\\SimConnect.FSX.lib")
#endif