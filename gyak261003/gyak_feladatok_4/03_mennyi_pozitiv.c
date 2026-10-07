/*
 * 3. Mennyi pozitív
 * Készíts egy programot C nyelven, amelyik:
 * - Bekér 10 darab lebegőpontos számot,
 * - A bekérések során számolja meg, hogy a bekért számok közül mennyi pozitív,
 * - A végén ezt a darabszámot jelenítse meg.
 */
#include <stdio.h>

int main() {
    float szam;
    int pozitiv_szamok = 0;
    for (int i = 0; i < 10; i++) {
        printf("Adj meg egy lebegopontos szamot: ");
        scanf("%f", &szam);
        if (szam > 0) {
            pozitiv_szamok++;
        }
    }
    printf("A pozitiv szamok darabszama: %d\n", pozitiv_szamok);
    return 0;
}
