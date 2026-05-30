// ConsoleApplication9.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include "Character.h"
#include <stdio.h>

int main()
{
	Character chara1;
	Character chara2;
	chara1.printStatus("キャラ1", 1, 8);
	chara2.printStatus("キャラ2", 5, 2);
}