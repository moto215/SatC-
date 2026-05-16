// ConsoleApplication2.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <stdio.h>

int main()
{
	int maxNum = 0;

	int num[5] = {
		4,
		2,
		5,
		1,
		3,
	};

	for (int i = 0; i < 5; i++)
	{
		if (maxNum < num[i])
		{
			maxNum = num[i];
		}
	}

	printf("最大値は %d です", maxNum);

	return 0;
}