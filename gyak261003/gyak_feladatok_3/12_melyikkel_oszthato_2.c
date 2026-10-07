/*
 * 12. Melyikkel osztható 2
 * Készíts egy programot C nyelven, amelyik:
 * - Bekér egy egész számot,
 * - Megvizsgálja, hogy a szám osztható-e 2-vel, 3-mal, 5-tel, illetve 7-tel,
 * - Ezúttal a kimeneten egyetlen sorban jelenjen meg egy tömör válasz.
 * Példák:
 * - Bemenet: 9; Kimenet: A szam csak 3-mal oszthato
 * - Bemenet: 21; Kimenet: A szam oszthato 3-mal es 7-tel
 * - Bemenet: 30; Kimenet: A szam oszthato 2-vel, 3-mal es 5-tel
 * - Bemenet: 210; Kimenet: A szam oszthato mind a negy vizsgalt ertekkel
 * - Bemenet: 11; Kimenet: A szam nem oszthato egyik vizsgalt ertekkel sem
 */
#include <stdio.h>
#define DARAB 4

void oszthatosag_kiszamit(int szam, const int osztok[], int oszthato[], int darab) {
    for (int i = 0; i < darab; i++) {
        oszthato[i] = szam % osztok[i] == 0;
    }
}

void eredmeny_kiir(const int oszthato[], const char *ragok[], int darab) {
    int oszthato_db = 0;
    for (int i = 0; i < darab; i++) {
        oszthato_db += oszthato[i];
    }

    printf("A szam ");
    if (oszthato_db == 0) {
        printf("nem oszthato egyik vizsgalt ertekkel sem");
    } else if (oszthato_db == darab) {
        printf("oszthato mind a negy vizsgalt ertekkel");
    } else {
        printf(oszthato_db == 1 ? "csak " : "oszthato ");

        int kiirt_db = 0;
        for (int i = 0; i < darab; i++) {
            if (oszthato[i]) {
                if (kiirt_db > 0) {
                    printf(kiirt_db == oszthato_db - 1 ? " es " : ", ");
                }
                printf("%s", ragok[i]);
                kiirt_db++;
            }
        }

        if (oszthato_db == 1) {
            printf(" oszthato");
        }
    }
    printf("\n");
}

int main() {
    int osztok[DARAB] = {2, 3, 5, 7};
    const char *ragok[DARAB] = {"2-vel", "3-mal", "5-tel", "7-tel"};

    int oszthato[DARAB];
    int szam;

    printf("Kerem az egész számot: ");
    scanf("%d", &szam);

    oszthatosag_kiszamit(szam, osztok, oszthato, DARAB);
    eredmeny_kiir(oszthato, ragok, DARAB);
    return 0;
}
