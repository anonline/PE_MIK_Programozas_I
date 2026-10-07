/*
 * 3. Bekérés – kiírás egyben
 * Készíts egy programot C nyelven, amelyik:
 * - Egy scanf utasítás segítségével bekér kettő lebegőpontos számot
 * - Egy printf utasítás segítségével megjeleníti őket külön sorban
 */
#include <stdio.h>

void bekeres_kiiras_egyben(void) {
    float szam1, szam2;
    printf("Adj meg ket lebegopontos szamot: ");
    scanf("%f %f", &szam1, &szam2);
    printf("Az elso szam: %.2f\n", szam1);
    printf("A masodik szam: %.2f\n", szam2);
}

int main() {
    bekeres_kiiras_egyben();
    return 0;
}
