// ConsoleApplication2.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <stdio.h>

int main()
{

	char text[27];

	for (int i = 0; i < 27; i++) 
	{
		if (i == 26)
		{
			text[i] = '\0';
		}
		else
		{
			text[i] = i + 97;
		}
	}

	printf("%s\n", text);

	return 0;
}