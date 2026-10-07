/*
 * 13. Véletlen prímek
 * Készíts egy programot C nyelven, amelyik:
 * - Véletlenszerűen generál egy 100-nál kisebb prímszámot
 *   (addig próbálkozik, amíg prímet nem talál),
 * - A végén kiírja, hogy mi a generált szám, és mennyi próbálkozásra volt szüksége.
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
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

void generalt_primszam(int *primszam, int *probalkozasok) {
    *probalkozasok = 0;
    do {
        *primszam = rand() % 100;
        (*probalkozasok)++;
    } while (!primszam_e(*primszam));
}

int main() {
    srand(time(NULL));
    int primszam, probalkozasok;
    generalt_primszam(&primszam, &probalkozasok);
    printf("A generált prímszám: %d\n", primszam);
    printf("Próbálkozások száma: %d\n", probalkozasok);
    return 0;
}
