/*
 * 1. Pozitív, negatív, nulla
 * Készíts egy programot C nyelven, amelyik:
 * - Bekér egy egész számot,
 * - Kiírja, hogy a szám pozitív, negatív, vagy nulla.
 */

#include <stdio.h>

int main() {
    int szam;
    printf("Kerem az egesz szamot: ");
    scanf("%d", &szam);
    if (szam > 0) {
        printf("A szam pozitiv.\n");
    } else if (szam < 0) {
        printf("A szam negativ.\n");
    } else {
        printf("A szam nulla.\n");
    }
    return 0;
}
