#pragma once

#ifdef RV_PLATFORM_WINDOWS
	#ifdef RV_BUILD_DLL
		#define RAVEN_API __declspec(dllexport)
	#else
		#define RAVEN_API __declspec(dllimport)
	#endif // RV_BUILD_DLL
#else
	#error Raven only supports Windows!
#endif // RV_PLATFORM_WINDOWS
