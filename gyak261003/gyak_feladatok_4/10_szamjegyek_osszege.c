/*
 * 10. Számjegyek összege
 * Készíts egy programot C nyelven, amelyik:
 * - Bekér egy egész számot,
 * - Kiírja a számjegyeinek összegét.
 */
#include <stdio.h>

int main() {
    int szam, osszeg = 0;
    printf("Add meg a szamot: ");
    scanf("%d", &szam);

    while (szam != 0) {
        osszeg += szam % 10;
        szam /= 10;
    }

    printf("A számjegyek összege: %d\n", osszeg);
    return 0;
}
