/*
 * 3. Van-e páros
 * Készíts egy programot C nyelven, amelyik:
 * - Bekér három egész számot,
 * - Kiírja, hogy van-e köztük páros, vagy nincs.
 */
#include <stdio.h>
#include <stdbool.h>

int main() {
    int szamok[3];
    bool van_paros = false;

    for (int i = 0; i < 3; i++) {
        printf("Kerem a(z) %d. egesz szamot: ", i + 1);
        scanf("%d", &szamok[i]);

        if (szamok[i] % 2 == 0) {
            van_paros = true;
        }
    }
    
    if( van_paros) {
        printf("Van-e kozottuk paros.\n");
    } else {
        printf("Nincs kozottuk paros.\n");
    }

    return 0;
}
