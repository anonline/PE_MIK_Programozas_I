/*
 * 4. Összegzés
 * Készíts egy programot C nyelven, amelyik:
 * - Bekér 15 lebegőpontos számot egy tömbbe,
 * - Megjeleníti az összegüket.
 */

 #include <stdio.h>

int main()
{
    float tomb[15];
    float osszeg = 0;
    for (int i = 0; i < 15; i++) {
        printf("Add meg a %d. szamot: ", i + 1);
        scanf("%f", &tomb[i]);
        osszeg += tomb[i];
    }

    printf("A szamok osszege: %f\n", osszeg);
    return 0;
}