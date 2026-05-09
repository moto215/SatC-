// ConsoleApplication7.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <stdio.h>
#include "coin.h"
#include "summary.h"

int yen;

int main()
{
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

        total(yen);

        fhCoin = fhCoinSort(yen);
        ohCoin = ohCoinSort(yen);
        fiftyCoin = fiftyCoinSort(yen);
        tenCoin = tenCoinSort(yen);
        fiveCoin = fiveCoinSort(yen);
        oneCoin = oneCoinSort(yen);

        exchange(fhCoin, ohCoin, fiftyCoin, tenCoin, fiveCoin, oneCoin);

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