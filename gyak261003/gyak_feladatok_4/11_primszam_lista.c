/*
 * 11. Prímszám lista
 * Készíts egy programot C nyelven, amelyik:
 * - Megkeresi és kilistázza az összes 100-nál kisebb prímszámot.
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
    printf("100-nál kisebb prímszámok:\n");
    for (int i = 2; i < 100; i++) {
        if (primszam_e(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}
