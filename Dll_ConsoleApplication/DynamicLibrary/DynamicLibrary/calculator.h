#pragma once


#ifdef CALCULATIOR_EXPORTS
#define CALCULATOR_API _declspec(dllexport)
#else
#define CALCULATOR_API _declspec(dllexport)
#endif

extern "C"  CALCULATOR_API int addition(int a, int b);
extern "C" CALCULATOR_API int subtraction(int a, int b);