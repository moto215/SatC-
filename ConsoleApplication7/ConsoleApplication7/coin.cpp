#include <stdio.h>
#include "coin.h"

int fhCoinSort(int num) 
{
    int fhCoin = num / 500;
    yen = num % 500;

    return fhCoin;
}

int ohCoinSort(int num)
{
    int ohCoin = num / 100;
    yen = num % 100;

    return ohCoin;
}

int fiftyCoinSort(int num)
{
    int fiftyCoin = num / 50;
    yen = num % 50;

    return fiftyCoin;
}

int tenCoinSort(int num)
{
    int tenCoin = num / 10;
    yen = num % 10;

    return tenCoin;
}

int fiveCoinSort(int num)
{
    int fiveCoin = num / 5;
    yen = num % 5;

    return fiveCoin;
}

int oneCoinSort(int num)
{
    int oneCoin = num / 1;
    yen = num % 1;

    return oneCoin;
}

void exchange(int fh, int oh, int fifty, int ten, int five, int one) 
{
    // 0–‡‚¾‚Á‚½ê‡‚ÍƒXƒLƒbƒv‚·‚é
    if (fh > 0)
    {
        printf("500‰~‹Ê‚ª%d–‡\n", fh);
    }
    if (oh > 0)
    {
        printf("100‰~‹Ê‚ª%d–‡\n", oh);
    }
    if (fifty > 0)
    {
        printf("50‰~‹Ê‚ª%d–‡\n", fifty);
    }
    if (ten > 0)
    {
        printf("10‰~‹Ê‚ª%d–‡\n", ten);
    }
    if (five > 0)
    {
        printf("5‰~‹Ê‚ª%d–‡\n", five);
    }
    if (one > 0)
    {
        printf("1‰~‹Ê‚ª%d–‡\n", one);
    }
}