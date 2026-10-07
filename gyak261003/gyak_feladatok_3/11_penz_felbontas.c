/*
 * 11. Pénz felbontás
 * Készíts egy programot C nyelven, amelyik:
 * - Bekér egy pénzösszeget,
 * - Kiírja, hogy az összeget hogyan lehet a legjobban kifizetni 50 Ft-os, 10 Ft-os és 5 Ft-os érmékkel.
 * Példák:
 * - Összeg: 20 Ft; Kimenet: 2 db 10 Ft
 * - Összeg: 130 Ft; Kimenet: 2 db 50 Ft, 3 db 10 Ft
 * - Összeg: 205 Ft; Kimenet: 4 db 50 Ft, 1 db 5 Ft
 * - Összeg: 185 Ft; Kimenet: 3 db 50 Ft, 3 db 10 Ft, 1 db 5 Ft
 * - Összeg: 131 Ft; Nem fizetheto ki
 */

#include <stdio.h>

typedef struct KifizetesTipus {
    unsigned int otven;
    unsigned int tiz;
    unsigned int ot;
} Kifizetes;

Kifizetes penz_felbontas(unsigned int osszeg) {
    Kifizetes kifizetes = {0, 0, 0};

    if (osszeg < 5 || osszeg % 5 != 0) {
        return kifizetes; // Nem fizetheto ki
    }

    kifizetes.otven = osszeg / 50;
    osszeg %= 50;

    kifizetes.tiz = osszeg / 10;
    osszeg %= 10;

    kifizetes.ot = osszeg / 5;

    return kifizetes;
}

int main() {
    unsigned int osszeg;
    printf("Kerem a penzosszeget: ");
    scanf("%u", &osszeg);

    Kifizetes kifizetes = penz_felbontas(osszeg);

    printf("Összeg: %u Ft; Kimenet: ", osszeg);
    if (kifizetes.otven == 0 && kifizetes.tiz == 0 && kifizetes.ot == 0) {
        printf("Nem fizetheto ki.\n");
    } else {
        if (kifizetes.otven > 0) {
            printf("%u db 50 Ft%s", kifizetes.otven, (kifizetes.tiz > 0 || kifizetes.ot > 0) ? ", " : "\n");
        }
        if (kifizetes.tiz > 0) {
            printf("%u db 10 Ft%s", kifizetes.tiz, (kifizetes.ot > 0) ? ", " : "\n");
        }
        if (kifizetes.ot > 0) {
            printf("%u db 5 Ft\n", kifizetes.ot);
        }
    }

    return 0;
}
