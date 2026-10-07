/*
 * 1. Bekérés – számolás – kiírás 1
 * Készíts egy programot C nyelven, amelyik:
 * - Bekér egy egész számot
 * - Kiírja a bekért szám kétszeresét
 */
#include <stdio.h>

void bekeres_szamolas_kiiras_1(void) {
    int szam;
    printf("Adj meg egy egesz szamot: ");
    scanf("%d", &szam);
    printf("A szam ketszerese: %d\n", szam * 2);
}

int main() {
    bekeres_szamolas_kiiras_1();
    return 0;
}
