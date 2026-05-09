// ConsoleApplication3.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <stdio.h>
#include "fizzbuzz.h"

int main()
{
	int startNum = 1;
	int lastNum = 1;
	
	int error = 0;

	printf("1～1000の整数を開始値を入力してください\n");
	scanf_s("%d", &startNum);

	printf("1～1000の整数を終了値を入力してください\n");
	scanf_s("%d", &lastNum);

	error = Check(startNum, lastNum);
	switch (error)
	{
	case 0:
		printf("FizzBuzzを開始します\n");
		Loop(startNum, lastNum);
		break;
	case 1:
		printf("1未満または1000超過しています\n");
		break;
	case 2:
		printf("開始値が終了値よりも大きいです\n");
		break;
	default:
		break;
	}

	return 0;
}