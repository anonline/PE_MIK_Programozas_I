/*
 * 7. Bekérés – számolás – kiírás 5
 * Készíts egy programot C nyelven, az alábbiak szerint:
 * - Egy ajándékot egy téglatest alakú dobozba csomagolunk
 * - Kérd be a doboz oldalainak hosszát
 * - Mennyi hely van a dobozban ajándéknak? Írd ki a térfogatát!
 * - Mennyi csomagolópapír kell a becsomagolásához? Írd ki a felszínét!
 * - A doboz minden élét beragasztjuk ragasztószalaggal, hogy védjük.
 *   Mennyi szalagra van szükségünk?
 * - A megvalósítás során használj eljárásokat!
 */
#include <stdio.h>

struct DobozTipus {
    float szelesseg;
    float magassag;
    float hosszsag;
};

typedef struct DobozTipus Doboz;

Doboz doboz_bekeres(void) {
    Doboz ujDoboz;
    printf("Kerem a doboz szelesseget: ");
    scanf("%f", &ujDoboz.szelesseg);
    printf("Kerem a doboz magassagat: ");
    scanf("%f", &ujDoboz.magassag);
    printf("Kerem a doboz hosszusagat: ");
    scanf("%f", &ujDoboz.hosszsag);
    return ujDoboz;
}

double terfogat_szamitas(Doboz doboz) {
    return doboz.szelesseg * doboz.magassag * doboz.hosszsag;
}

double felszín_szamitas(Doboz doboz) {
    return 2 * (doboz.szelesseg * doboz.magassag + doboz.szelesseg * doboz.hosszsag + doboz.magassag * doboz.hosszsag);
}

double szalag_szamitas(Doboz doboz) {
    return 4 * (doboz.szelesseg + doboz.magassag + doboz.hosszsag);
}

int main() {
    Doboz doboz = doboz_bekeres();
    double terfogat = terfogat_szamitas(doboz);
    double felszin = felszín_szamitas(doboz);
    double szalag = szalag_szamitas(doboz);
    printf("A doboz terfogata: %.2f\n", terfogat);
    printf("A doboz felszine: %.2f\n", felszin);
    printf("A doboz szalag hossza: %.2f\n", szalag);
    return 0;
}
