/*
 * 7. Melyikkel osztható
 * Készíts egy programot C nyelven, amelyik:
 * - Bekér egy egész számot,
 * - Megvizsgálja, hogy a szám osztható-e 2-vel, 3-mal, 5-tel, illetve 7-tel,
 *   és mindegyikhez külön kiírja a választ.
 * Példa:
 * Bemenet: 15
 * Kimenet:
 * 2-vel nem oszthato
 * 3-mal oszthato
 * 5-tel oszthato
 * 7-tel nem oszthato
 */
#include <stdio.h>

void oszthato_e(int szam, int oszto, const char *rag) {
    if (szam % oszto == 0) {
        printf("%d-%s oszthato\n", oszto, rag);
    } else {
        printf("%d-%s nem oszthato\n", oszto, rag);
    }
}

int main() {
    int szam;
    printf("Kerem az egesz szamot: ");
    if (scanf("%d", &szam) != 1) {
        fprintf(stderr, "Hibas vagy hianyzo bemenet.\n");
        return 1;
    }

    oszthato_e(szam, 2, "vel");
    oszthato_e(szam, 3, "mal");
    oszthato_e(szam, 5, "tel");
    oszthato_e(szam, 7, "tel");
    return 0;
}
