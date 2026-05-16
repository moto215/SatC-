// ConsoleApplication4.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <stdio.h>

int main()
{

    char text[10];
    text[0] = 'H';
    text[1] = 'e';
    text[2] = 'l';
    text[3] = 'l';
    text[4] = 'o';
    text[5] = '\0';

    printf("%s\n", text);

    return 0;
}