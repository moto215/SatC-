// ConsoleApplication2.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <stdio.h>
#include "calc.h"

int main()
{
	int leftNum;
	int rightNum;
	int anser;

	bool error = false;

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

		error = Operator(enzann, leftNum, rightNum);

		if (error)
		{
			// skipする
		}
		else
		{
			anser = Operator(enzann, leftNum, rightNum);
			printf("計算結果 %d\n", anser);
		}

		printf("もう一度計算する場合はyを、しない場合はその他キーを入力したください\n");
		scanf_s(" %c", &retryText);
		if (retryText == 'y')
		{
			printf("もう一度計算を行います\n");
		}
		else
		{
			break;
		}
	}

	return 0;
}