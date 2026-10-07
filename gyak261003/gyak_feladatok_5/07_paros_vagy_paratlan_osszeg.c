/*
 * 7. Páros vagy páratlan a nagyobb?
 * Készíts egy programot C nyelven, amelyik:
 * - Bekér 16 egész számot egy tömbbe,
 * - Kiírja, hogy a páros vagy a páratlan értékek összege nagyobb-e.
 */
#include <stdio.h>

int main()
{
    int tomb[16];
    int paros_osszeg = 0;
    int paratlan_osszeg = 0;
    for (int i = 0; i < 16; i++) {
        printf("Add meg a %d. szamot: ", i + 1);
        scanf("%d", &tomb[i]);
        if (tomb[i] % 2 == 0) {
            paros_osszeg += tomb[i];
        } else {
            paratlan_osszeg += tomb[i];
        }
    }
    printf("Paros szamok osszege: %d\n", paros_osszeg);
    printf("Paratlan szamok osszege: %d\n", paratlan_osszeg);
    if (paros_osszeg > paratlan_osszeg) {
        printf("A paros szamok osszege nagyobb.\n");
    } else if (paratlan_osszeg > paros_osszeg) {
        printf("A paratlan szamok osszege nagyobb.\n");
    } else {
        printf("Ugyanannyi a paros es paratlan szamok osszege.\n");
    }
    return 0;
}