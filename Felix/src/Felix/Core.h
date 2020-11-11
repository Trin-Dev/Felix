#pragma once

#ifdef FX_PLATFROM_WINDOWS
	#ifdef FX_BUILD_DLL
		#define FELIX_API __declspec(dllexport)
	#else
		#define FELIX_API __declspec(dllexport)
	#endif // FX_BUILD_DLL
#else
	#error Felix Only Support Windows.
#endif // FX_PLATFROM_WINDOWS