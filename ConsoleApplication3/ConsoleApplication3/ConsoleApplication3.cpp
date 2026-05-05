// ConsoleApplication3.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <stdio.h>

void Calc(int);

int main()
{
	int startNum = 1;
	int lastNum = 1;

	printf("1～1000の整数を開始値を入力してください\n");
	scanf_s("%d", &startNum);

	printf("1～1000の整数を終了値を入力してください\n");
	scanf_s("%d", &lastNum);

	// 入力された数値がエラーか判定する
	if (startNum < 1 || startNum > 1000 || lastNum < 1 || lastNum > 1000)
	{
		printf("1未満または1000超過しています\n");
		return 0;
	}
	if (startNum > lastNum)
	{
		printf("開始値が終了値よりも大きいです\n");
		return 0;
	}

	printf("FizzBuzzを開始します\n");

	for (int i = 0; i < lastNum; i++)
	{
		Calc(startNum);
		startNum++;
	}

	return 0;
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