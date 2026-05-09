#include <stdio.h>

int totalCoin;
int totalRepeat;

void summary(int yen)
{
    // 合計金額を代入しておく
    totalCoin += yen;
    // 両替回数を1増やす
    totalRepeat++;
}

void total() 
{
    printf("合計両替回数は%dで、合計金額は%d円でした。\n", totalRepeat, totalCoin);
}