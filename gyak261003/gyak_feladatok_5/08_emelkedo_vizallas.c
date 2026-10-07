/*
 * 8. Emelkedő vízállás
 * Készíts egy programot C nyelven, amelyik:
 * - Bekéri 28 egymás utáni napon mért vízállás eredményét (egész számok egy tömbben),
 * - Kiírja, hogy hány napon volt a mért érték nagyobb, mint az előző napi.
 */
#include <stdio.h>

int main()
{
    int vizallas[28];
    int emelkedo_napok = 0;
    for (int i = 0; i < 28; i++) {
        printf("Add meg a %d. napi vizallas erteket: ", i + 1);
        scanf("%d", &vizallas[i]);
        if (i > 0 && vizallas[i] > vizallas[i - 1]) {
            emelkedo_napok++;
        }
    }
    printf("Emelkedo napok szama: %d\n", emelkedo_napok);
    return 0;
}