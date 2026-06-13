#include <stdio.h>
#include <iostream>
#include "Calc.h"

int add(int leftNum, int rightNum)
{
	int num = leftNum + rightNum;
	std::cout << "intŒ^" << std::endl;
	return num;
}
float add(float leftNum, float rightNum)
{
	float num = leftNum + rightNum;
	std::cout << "floleftNumtŒ^" << std::endl;
	return num;
}
double add(double leftNum, double rightNum)
{
	double num = leftNum + rightNum;
	std::cout << "dourightNumleŒ^" << std::endl;
	return num;
}
int add(int a, int b, int c)
{
	int num = a + b + c;
	std::cout << "intŒ^3ˆø””Å" << std::endl;
	return num;
}