/*
 * 8. Bekérés – számolás – kiírás 6
 * Készíts egy programot C nyelven, az alábbiak szerint:
 * - A program egy verseny három versenyzőjének eredményeit kezeli
 * - Minden versenyzőnek 5-ször próbálkozhatott, így 5 különböző pontszámot ért el
 * - Olvasd be mindhárom versenyző 5-5 pontszámát
 * - Jelenítsd meg az egyes pontszámokat, valamint minden versenyzőhöz az átlagpontszámot is
 */
#include <stdio.h>
#define VERSENYZOK_SZAMA 3
#define PONTSZAMOK_SZAMA 5

typedef struct VersenyzoTipus {
    int pontszamok[PONTSZAMOK_SZAMA];
    float atlagpontszam;
    float osszpontszam;
} Versenyzo;

Versenyzo versenyzo_bekeres() {
    Versenyzo ujVersenyzo;
    ujVersenyzo.osszpontszam = 0.0f;

    for (int i = 0; i < PONTSZAMOK_SZAMA; i++) {
        printf("Kerem a(z) %d/%d. pontszamot: ", i + 1, PONTSZAMOK_SZAMA);
        scanf("%d", &ujVersenyzo.pontszamok[i]);
        ujVersenyzo.osszpontszam += ujVersenyzo.pontszamok[i];
    }

    ujVersenyzo.atlagpontszam = ujVersenyzo.osszpontszam / PONTSZAMOK_SZAMA;
    return ujVersenyzo;
}

void versenyzo_kiiras(Versenyzo versenyzo) {
    for (int i = 0; i < PONTSZAMOK_SZAMA; i++) {
        printf("%d ", versenyzo.pontszamok[i]);
    }
    printf("\n");
    printf("Atlagpontszama: %.2f\n", versenyzo.atlagpontszam);
}

int main() {
    Versenyzo versenyzok[VERSENYZOK_SZAMA];

    for (int i = 0; i < VERSENYZOK_SZAMA; i++) {
        printf("Kerem a(z) %d/%d. versenyzo adatait:\n", i + 1, VERSENYZOK_SZAMA);
        versenyzok[i] = versenyzo_bekeres();
    }

    for (int i = 0; i < VERSENYZOK_SZAMA; i++) {
        printf("A(z) %d/%d. versenyzo adatai: ", i + 1, VERSENYZOK_SZAMA);
        versenyzo_kiiras(versenyzok[i]);
    }

    return 0;
}
