/*
 * 5. Átlag számítás
 * Készíts egy programot C nyelven, amelyik:
 * - Bekér 11 lebegőpontos számot egy tömbbe,
 * - Megjeleníti az átlagukat.
 */
#include <stdio.h>

int main()
{
    float tomb[11];
    float osszeg = 0;
    for (int i = 0; i < 11; i++) {
        printf("Add meg a %d. szamot: ", i + 1);
        scanf("%f", &tomb[i]);
        osszeg += tomb[i];
    }

    float atlag = osszeg / 11;
    printf("A szamok atlaga: %f\n", atlag);
    return 0;
}