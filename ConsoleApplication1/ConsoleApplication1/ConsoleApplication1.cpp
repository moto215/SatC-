// ConsoleApplication10.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include "Calc.h"

int main()
{
	int num1;
	float num2;
	double num3;
	int num4;

	num1 = add(1, 2);
	std::cout << num1 << std::endl;
	num2 = add(1.1f, 2.4f);
	std::cout << num2 << std::endl;
	num3 = add(1.2, 2.8);
	std::cout << num3 << std::endl;
	num4 = add(1, 2, 3);
	std::cout << num4 << std::endl;

	return 0;
}