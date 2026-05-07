// ConsoleApplication4.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <stdio.h>

int main()
{
    int yen;
    int fhCoin;
    int ohCoin;
    int fiftyCoin;
    int tenCoin;
    int fiveCoin;
    int oneCoin;

    int totalRepeat = 0;
    int totalCoin = 0;

    char choose;

    while (true)
    {
        printf("1以上の整数を入力してください\n");
        scanf_s("%d", &yen);

        // 合計金額を代入しておく
        totalCoin += yen;
        // 両替回数を1増やす
        totalRepeat++;

        fhCoin = yen / 500;
        yen = yen % 500;

        ohCoin = yen / 100;
        yen = yen % 100;

        fiftyCoin = yen / 50;
        yen = yen % 50;

        tenCoin = yen / 10;
        yen = yen % 10;

        fiveCoin = yen / 5;
        yen = yen % 5;

        oneCoin = yen / 1;
        yen = yen % 1;

        // 0枚だった場合はスキップする
        if (fhCoin > 0)
        {
            printf("500円玉が%d枚\n", fhCoin);
        }
        if (ohCoin > 0)
        {
            printf("100円玉が%d枚\n", ohCoin);
        }
        if (fiftyCoin > 0)
        {
            printf("50円玉が%d枚\n", fiftyCoin);
        }
        if (tenCoin > 0)
        {
            printf("10円玉が%d枚\n", tenCoin);
        }
        if (fiveCoin > 0)
        {
            printf("5円玉が%d枚\n", fiveCoin);
        }
        if (oneCoin > 0)
        {
            printf("1円玉が%d枚\n", oneCoin);
        }

        printf("続けて両替する場合は「y」を入力してください。そうでない場合はそれ以外のキーを入力してください。\n");
        scanf_s(" %c", &choose);
        if (choose == 'y')
        {
            printf("もう一度両替をします\n\n");
        }
        else break;
    }

    printf("合計両替回数は%dで、合計金額は%d円でした。\n", totalRepeat, totalCoin);

    return 0;
}