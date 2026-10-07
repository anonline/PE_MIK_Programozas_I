/*
 * 2. Bekérés – kiírás külön
 * Készíts egy programot C nyelven, amelyik:
 * - Külön scanf utasítások segítségével bekér kettő egész számot
 * - Külön printf utasítások segítségével megjeleníti őket külön sorban
 */
#include <stdio.h>

void bekeres_kiiras_kulon(void) {
    int szam1, szam2;
    printf("Adj meg egy egesz szamot: ");
    scanf("%d", &szam1);
    printf("Adj meg egy masik egesz szamot: ");
    scanf("%d", &szam2);
    printf("Az elso szam: %d\n", szam1);
    printf("A masodik szam: %d\n", szam2);
}

int main() {
    bekeres_kiiras_kulon();
    return 0;
}
