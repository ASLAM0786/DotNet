#include "pch.h"
#include<iostream>
#include "calculator.h"

int addition(int a,int b) {
	int res = a + b;
	std::cout << "Addition" << res;
	return res;
}

int subtraction(int a, int b) {
	int res = a - b;
	std::cout << "Subtraction" << res;
	return res;
}