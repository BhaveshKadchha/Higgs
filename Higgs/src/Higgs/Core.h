#pragma once

#ifdef HG_PLATFORM_WINDOWS
	#ifdef HG_BUILD_DLL
		#define HIGGS_API __declspec(dllexport)
	#else 
		#define HIGGS_API __declspec(dllimport)
	#endif
#else
	#error Higgs only support Windows!
#endif