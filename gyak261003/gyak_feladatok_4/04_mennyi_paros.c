/*
 * 4. Mennyi páros
 * Készíts egy programot C nyelven, amelyik:
 * - Egész számokat kér be, amíg mind pozitív,
 * - Akkor áll le, ha nullát vagy negatív értéket írunk be,
 * - A bekérések során számolja meg, hogy a bekért számok közül mennyi páros van,
 * - A végén ezt a darabszámot jelenítse meg.
 */
#include <stdio.h>

int main() {
    int szam;
    int paros_szamok = 0;
    do {
        printf("Adj meg egy egész számot: ");
        scanf("%d", &szam);
        if (szam > 0 && szam % 2 == 0) {
            paros_szamok++;
        }
    } while (szam > 0);
    printf("A páros számok darabszama: %d\n", paros_szamok);
    return 0;
}
