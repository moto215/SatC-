// ConsoleApplication4.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <stdio.h>

struct Parameter
{
    char name;
    int hp;
    int attack;
    int defense;
};

void DispParameter(Parameter);

int main()
{
    Parameter playerA_param = { 'A', 20, 5, 10 };
    Parameter playerB_param = { 'B', 10, 20, 5 };

    DispParameter(playerA_param);
    DispParameter(playerB_param);

    return 0;
}

void DispParameter(Parameter param) 
{
    printf("------------------\n");
    printf("名前：%c\n", param.name);
    printf("HP：%d\n", param.hp);
    printf("攻撃力：%d\n", param.attack);
    printf("防御力：%d\n", param.defense);
    printf("------------------\n");
}