#include <stdio.h>
#include "fizzbuzz.h"

void Loop(int startNum, int lastNum) 
{
	for (int i = 0; i < lastNum; i++)
	{
		Calc(startNum);
		startNum++;
	}
}

/// <summary>
/// 入力された数値が3の倍数か5の倍数か計算する
/// </summary>
/// <param name="num">開始値を入力する</param>
void Calc(int num)
{
	if (num % 3 == 0 && num % 5 == 0)
	{
		printf("FizzBuzz\n");
	}
	else if (num % 3 == 0)
	{
		printf("Fizz\n");
	}
	else if (num % 5 == 0)
	{
		printf("Buzz\n");
	}
	else
	{
		printf("%d\n", num);
	}
}

int Check(int startNum, int lastNum)
{
	// 入力された数値がエラーか判定する
	if (startNum < 1 || startNum > 1000 || lastNum < 1 || lastNum > 1000)
	{
		// 1未満または1000超過している時
		return 1;
	}
	if (startNum > lastNum)
	{
		// 開始値が終了値よりも大きい時
		return 2;
	}
	else
	{
		// 正しく入力されている時
		return 0;
	}
}