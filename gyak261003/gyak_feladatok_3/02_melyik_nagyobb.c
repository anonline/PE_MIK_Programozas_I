/*
 * 2. Melyik nagyobb
 * Készíts egy programot C nyelven, amelyik:
 * - Bekér két számot,
 * - Kiírja, hogy a két szám közül az első vagy a második a nagyobb, vagy esetleg egyenlőek.
 * - Nem a nagyobb értéket kell kiírni, hanem hogy az első vagy a második az.
 */
#include <stdio.h>

int main() {
    int szam1, szam2;
    printf("Kerem az elso egesz szamot: ");
    scanf("%d", &szam1);
    printf("Kerem a masodik egesz szamot: ");
    scanf("%d", &szam2);
    if (szam1 > szam2) {
        printf("Az elso szam nagyobb.\n");
    } else if (szam1 < szam2) {
        printf("A masodik szam nagyobb.\n");
    } else {
        printf("A ket szam egyenlo.\n");
    }
    
    return 0;
}
