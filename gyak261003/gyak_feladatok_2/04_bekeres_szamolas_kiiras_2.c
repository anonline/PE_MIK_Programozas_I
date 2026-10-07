/*
 * 4. Bekérés – számolás – kiírás 2
 * Készíts egy programot C nyelven, amelyik:
 * - Bekér három egész számot
 * - Megjeleníti a három szám összegét
 * - Megjeleníti, hogy melyik szám mennyit ad maradékul 5-tel osztva
 */
#include <stdio.h>

void bekeres_szamolas_kiiras_2(void) {
    int szam1, szam2, szam3;
    printf("Adj meg harom egesz szamot: ");
    scanf("%d %d %d", &szam1, &szam2, &szam3);
    int osszeg = szam1 + szam2 + szam3;
    printf("A harom szam osszege: %d\n", osszeg);
    printf("Az elso szam maradeka 5-tel osztva: %d\n", szam1 % 5);
    printf("A masodik szam maradeka 5-tel osztva: %d\n", szam2 % 5);
    printf("A harmadik szam maradeka 5-tel osztva: %d\n", szam3 % 5);
}

int main() {
    bekeres_szamolas_kiiras_2();
    return 0;
}
