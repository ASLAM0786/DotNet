#pragma once


#ifdef CALCULATION_EXPORTS
#define CALCULATION_API _declspec(dllexport)
#else
#define CALCULATION_API _declspec(dllexport)
#endif

extern "C"  CALCULATION_API void multiplication(int a, int b);
extern "C" CALCULATION_API void devide(int a, int b);