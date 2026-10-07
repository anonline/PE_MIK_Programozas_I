/*
 * 5. Mennyi negatív
 * Készíts egy programot C nyelven, amelyik:
 * - Bekér négy lebegőpontos számot,
 * - Kiírja, hogy mennyi negatív érték van a bekért számok között.
 */
#include <stdio.h>

int main() {
    float szamok[4];
    int negativ_db = 0;

    for (int i = 0; i < 4; i++) {
        printf("Kerem a(z) %d. lebegopontos szamot: ", i + 1);
        scanf("%f", &szamok[i]);
        if (szamok[i] < 0) {
            negativ_db++;
        }
    }

    printf("A bekert szamok kozul %d negativ.\n", negativ_db);
    return 0;
}