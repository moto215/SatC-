// ConsoleApplication1.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int random() 
{
	// 0から100の整数で乱数を生成
	int num = rand() % 101;
	return num;
}

int main()
{
	// 乱数のシードを初期化
	srand(static_cast<unsigned int>(time(0)));

	int a = random();
	int b = random();
	int c = random();
	int d = random();
	int e = random();

	float total = (float)a + (float)b + (float)c + (float)d + (float)e;

	float average = total / 5;

	printf("%d\n", a);
	printf("%d\n", b);
	printf("%d\n", c);
	printf("%d\n", d);
	printf("%d\n", e);
	printf("%.1f\n", total);
	printf("%.1f\n", average);

	bool ave = false;
	bool score = false;

	if (average >= 60) 
	{
		ave = true;
	}
	if (a > 39 && b > 39 && c > 39 && d > 39 && e > 39)
	{
		score = true;
	}

	if (ave) 
	{
		if (score)
		{
			printf("合格\n");
		}
		else
		{
			printf("40点未満の教科があった為不合格です");
		}
	}
	else if(score)
	{
		printf("平均点が60未満なので不合格です\n");
	}
	else
	{
		printf("平均点が60未満かつ40点未満の教科があった為不合格です\n");
	}
}