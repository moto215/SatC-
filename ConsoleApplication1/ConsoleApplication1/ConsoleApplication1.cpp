// ConsoleApplication1.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	// コンピューターの時間を変数に代入する
	int t = (int)time(nullptr);

	int rank = 0;

	int answer = t % 10;

	int input;

	bool gameClear = false;

	int life = 3;

	while (!gameClear)
	{
		printf("残りライフ%d\n",life);
		printf("0～9の数字を入力してください\n");
		scanf_s("%d", &input);

		if (input == answer)
		{
			rank = 2;
			printf("一致!\n");
		}
		else if (answer < input)
		{
			printf("大きい!\n");
		}
		else if (answer > input)
		{
			printf("小さい!\n");
		}

		int sub = answer - input;
		if (sub > -3 && sub < 3 && answer != input)
		{
			rank = 1;
			printf("惜しい!\n");
		}

		switch (rank)
		{
		case 2:
			printf("ランクS\n");
			gameClear = true;
			break;
		case 1:
			printf("ランクA\n");
			break;
		default:
			printf("ランクB\n");
			break;
		}

		if (gameClear)
		{
			printf("クリア\n");
		}
		else
		{
			printf("もう一回\n\n");
			life--;
		}

		if (life <= 0) 
		{
			printf("ゲームオーバー\n");
			gameClear = true;
		}
	}

	return 0;
}