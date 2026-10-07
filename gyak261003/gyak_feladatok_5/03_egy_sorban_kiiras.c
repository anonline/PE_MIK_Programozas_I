/*
 * 3. Egy sorban kiírás
 * Készíts egy programot C nyelven, amelyik:
 * - Bekér 12 egész számot egy tömbbe,
 * - Megjeleníti a bekért értékeket egy sorban, köztük vesszővel.
 * - Akkor igazán jó, ha csak az értékek között van vessző, a sor elején vagy végén nincs.
 */
#include <stdio.h>

int main()
{
    int tomb[12];
    for (int i = 0; i < 12; i++) {
        printf("Add meg a %d. szamot: ", i + 1);
        scanf("%d", &tomb[i]);
    }
    for (int i = 0; i < 12; i++) {
        printf("%d", tomb[i]);
        if (i < 11) {
            printf(", ");
        }
    }
    printf("\n");
    return 0;
}
