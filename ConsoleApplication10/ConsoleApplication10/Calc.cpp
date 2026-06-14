#include <stdio.h>
#include <iostream>
#include "Calc.h"

int add(int a, int b)
{
	int num = a + b;
	std::cout << "intŒ^" << std::endl;
	return num;
}
float add(float a, float b)
{
	float num = a + b;
	std::cout << "floatŒ^" << std::endl;
	return num;
}
double add(double a, double b)
{
	double num = a + b;
	std::cout << "doubleŒ^" << std::endl;
	return num;
}
int add(int a, int b, int c)
{
	int num = a + b + c;
	std::cout << "intŒ^3ˆø””Å" << std::endl;
	return num;
}