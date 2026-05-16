// ConsoleApplication2.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <stdio.h>
#include "Calc.h"

int main()
{

	Student studentData[5] =
	{
		{'A',10},
		{'B',20},
		{'C',30},
		{'D',40},
		{'E',50},
	};

	for (int i = 0; i < 5; i++)
	{
		scoreCalc(studentData[i]);
	}

	return 0;
}