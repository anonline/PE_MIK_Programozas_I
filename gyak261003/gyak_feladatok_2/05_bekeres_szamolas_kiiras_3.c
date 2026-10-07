/*
 * 5. Bekérés – számolás – kiírás 3
 * Készíts egy programot C nyelven, amelyik:
 * - Bekér négy darab lebegőpontos számot
 * - Megjeleníti az első kettő különbségét és a második kettő hányadosát
 */
#include <stdio.h>

void bekeres_szamolas_kiiras_3(void) {
    float szam1, szam2, szam3, szam4;
    printf("Adj meg negy lebegopontos szamot: ");
    scanf("%f %f %f %f", &szam1, &szam2, &szam3, &szam4);
    float kulonbseg = szam1 - szam2;
    float hanyados = szam3 / szam4;
    printf("Az elso ketto kulonbsege: %.2f\n", kulonbseg);
    printf("A masodik ketto hanyadosa: %.2f\n", hanyados);
}

int main() {
    bekeres_szamolas_kiiras_3();
    return 0;
}
