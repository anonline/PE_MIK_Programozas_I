/*
 * 8. Prímszám?
 * Készíts egy programot C nyelven, amelyik:
 * - Bekér egy egész számot,
 * - Kiírja, hogy a szám prímszám-e vagy nem.
 */
#include <stdio.h>
#include <stdbool.h>

bool primszam_e(int szam) {
    if (szam < 2) {
        return false;
    }
    for (int i = 2; i * i <= szam; i++) {
        if (szam % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int szam;
    printf("Add meg a szamot: ");
    scanf("%d", &szam);

    if (primszam_e(szam)) {
        printf("A szam primszam.\n");
    } else {
        printf("A szam nem primszam.\n");
    }

    return 0;
}
