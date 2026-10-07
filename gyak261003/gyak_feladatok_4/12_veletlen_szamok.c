/*
 * 12. Véletlen számok
 * Készíts egy programot C nyelven, amelyik:
 * - Generál 200 darab véletlen egész számot a 0-19 tartományon,
 * - Összeszámolja, hogy a generált számok közül mennyi kisebb 10-nél.
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int kisebb_10 = 0;
    for (int i = 0; i < 200; i++) {
        int szam = rand() % 20;
        printf("%d\t", szam);
        if (szam < 10) {
            kisebb_10++;
        }
    }
    printf("\n");
    printf("A generált számok közül %d kisebb 10-nél.\n", kisebb_10);
    return 0;
}
