// ConsoleApplication3.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <stdio.h>

int main()
{

	int a[4][3];

	for (int i = 0; i < 4; i++) 
	{
		for (int k = 0; k < 3; k++)
		{
			a[i][k] = i * k;
		}
	}

	for (int i = 0; i < 4; i++)
	{
		for (int k = 0; k < 3; k++)
		{
			printf("%d", a[i][k]);
		}
		printf("\n");
	}

	return 0;
}