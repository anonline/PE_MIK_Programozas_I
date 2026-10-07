/*
 * 1. Tömb bekérés, kiírás
 * Készíts egy programot C nyelven, amelyik:
 * - Bekér 10 egész számot egy tömbbe,
 * - Megjeleníti a bekért értékeket, mindet külön sorba.
 */
#include <stdio.h>

int main()
{
    int tomb[10];
    for (int i = 0; i < 10; i++) {
        printf("Add meg a %d. szamot: ", i + 1);
        scanf("%d", &tomb[i]);
    }
    for (int i = 0; i < 10; i++) {
        printf("%d\n", tomb[i]);
    }
    return 0;
}

