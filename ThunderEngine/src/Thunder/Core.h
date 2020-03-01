#pragma once

#ifdef TE_PLATFORM_WINDOWS
	#ifdef TE_BUILD_DLL
		#define THUNDER_API __declspec(dllexport)
	#else 
#define THUNDER_API __declspec(dllimport)
	#endif 
#else 
#error Thunder Engine currently supports Windows!
#endif 
