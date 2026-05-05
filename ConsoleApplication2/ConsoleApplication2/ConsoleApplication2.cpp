// ConsoleApplication2.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <stdio.h>

int main()
{
	int leftNum;
	int rightNum;

	char enzann;
	char retryText;

	while (true)
	{
		printf("整数を入力してください\n");
		scanf_s("%d", &leftNum);

		printf("演算子を入力してください\n");
		scanf_s(" %c", &enzann);

		printf("整数を入力してください\n");
		scanf_s("%d", &rightNum);

		switch (enzann)
		{
		case '+':
			printf("%d\n", leftNum + rightNum);
			break;
		case '-':
			printf("%d\n", leftNum - rightNum);
			break;
		case '*':
			printf("%d\n", leftNum * rightNum);
			break;
		case '/':
			if (leftNum == 0 || rightNum == 0)
			{
				printf("0を割ることはできません\n");
			}
			else
			{
				printf("%d\n", leftNum / rightNum);
			}
			break;
		default:
			printf("+ - * / のいずれかの演算子を入力してください\n");
			break;
		}
		
		printf("もう一度計算する場合はyを、しない場合はその他キーを押してください\n");
		scanf_s(" %c", &retryText);
		if (retryText == 'y')
		{
			printf("もう一度計算します\n\n");
		}
		else
		{
			printf("終了します\n");
			break;
		}
	}

	return 0;
}