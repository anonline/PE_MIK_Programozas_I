/*
 * 13. Véletlen hisztogram
 * Készíts egy programot C nyelven, amelyik:
 * - Létrehoz egy 10000 elemű, egész számokat tároló tömböt,
 * - Feltölti a tömböt véletlen számokkal a 0-9 tartományon,
 * - Egy 10 elemű tömbbe megszámolja, hogy az egyes értékek mennyiszer fordulnak elő,
 * - Ezt a statisztikát megjeleníti,
 * - Kiírja, hogy kellően egyenletes lett-e az eredmény: egyenletesnek tekintjük az eredményt, ha minden
 *   érték darabszáma 950 és 1150 között van.
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int tomb[10000];
    int statisztika[10] = {0};

    srand(time(NULL));

    for (int i = 0; i < 10000; i++) {
        tomb[i] = rand() % 10;
        statisztika[tomb[i]]++;
    }

    printf("Statisztika:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d: %d\n", i, statisztika[i]);
    }

    int egyenletes = 1;
    for (int i = 0; i < 10; i++) {
        if (statisztika[i] < 950 || statisztika[i] > 1150) {
            egyenletes = 0;
            break;
        }
    }

    if (egyenletes) {
        printf("Az eredmeny egyenletes.\n");
    } else {
        printf("Az eredmeny nem egyenletes.\n");
    }

    return 0;
}
