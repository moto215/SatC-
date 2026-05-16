// ConsoleApplication4.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <stdio.h>

void agePrint(int age) {
    printf("年齢は %d です\n", age);
}

int main()
{
    int ages[4] = {
        15,
        32,
        11,
        48,
    };

    for (int i = 0; i < 4; i++)
    {
        agePrint(ages[i]);
    }

    return 0;
}