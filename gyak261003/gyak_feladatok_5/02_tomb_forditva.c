/*
 * 2. Tömb bekérés, fordítva kiírás
 * Készíts egy programot C nyelven, amelyik:
 * - Bekér 8 lebegőpontos számot egy tömbbe,
 * - Megjeleníti a bekért értékeket fordított sorrendben, mindet külön sorba.
 */
#include <stdio.h>

int main()
{
    float tomb[8];
    for (int i = 0; i < 8; i++) {
        printf("Add meg a %d. szamot: ", i + 1);
        scanf("%f", &tomb[i]);
    }
    for (int i = 7; i >= 0; i--) {
        printf("%f\n", tomb[i]);
    }
    return 0;
}