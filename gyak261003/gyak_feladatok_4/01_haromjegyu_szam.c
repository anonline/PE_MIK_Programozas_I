/*
 * 1. Háromjegyű szám
 * Készíts egy programot C nyelven, amelyik:
 * - Addig kér be egész számokat, amíg háromjegyű számot nem kap,
 * - A végén írja ki a bekért értéket.
 */

#include <stdio.h>

int main() {
    int szam;
    do {
        printf("Kerem a szamot: ");
        scanf("%d", &szam);
    } while (szam < 100 || szam > 999);
    printf("A bekert szam: %d\n", szam);
    return 0;
}
