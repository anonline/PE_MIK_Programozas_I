/*
 * 9. Kerekítés
 * Készíts egy programot C nyelven, amelyik:
 * - Bekér egy előjel nélküli egész számot,
 * - Kerekíti a számot az 50 legközelebbi többszörösére, és kiírja az eredményt.
 */
#include <stdio.h>
#include <math.h>

void kerekites(unsigned int szam) {
    unsigned int kerekitett = (unsigned int)(round(szam / 50.0) * 50);
    printf("A szam kerekitve: %u\n", kerekitett);
}

int main() {
    unsigned int szam;
    printf("Kerem a szamot: ");
    scanf("%u", &szam);
    kerekites(szam);
    return 0;
}
