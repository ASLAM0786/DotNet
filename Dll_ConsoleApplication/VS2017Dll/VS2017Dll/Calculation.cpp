#include "pch.h"
#include"Calculation.h"
#include<iostream>



void multiplication(int a, int b) {
	std::cout << "Multipication" << a * b;
}

void devide(int a, int b) {
	if (b == 0) {
	std::cout << "Devider can't be zero";
		return;
	}
	std::cout << "devide" << a / b;
}