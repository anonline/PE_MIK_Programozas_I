/*
 * 14. Lottószám generálás
 * Készíts egy programot C nyelven, amelyik megvalósít egy 5-ös lottó sorsolást, vagyis:
 * - Létrehoz egy 5 elemű, egész számokat tároló tömböt,
 * - Beolvas egy egész számot, amely a lehetséges értékek számát jelöli (legalább 5 legyen az értéke),
 * - Generál a tömbbe 5 darab véletlenszerű értéket 1 és a beolvasott szám között úgy, hogy minden szám
 *   csak egyszer szerepelhessen.
 *   Például 5-ös lottó esetén a beolvasott érték 90 lenne, így 1-90 között generálnánk a számokat.
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int main()
{
    int tomb[5];
    int max_ertek;

    do
    {
        printf("Add meg a lehetséges értékek számát (legalább 5): ");
        scanf("%d", &max_ertek);
        if (max_ertek < 5)
        {
            printf("Hibas ertek! A szamnak legalabb 5-nek kell lennie.\n");
        }
    } while (max_ertek < 5);

    srand(time(NULL));

    for (int i = 0; i < 5; i++)
    {
        int szam;
        bool egyedi;
        do
        {
            szam = rand() % max_ertek + 1;
            egyedi = true;
            for (int j = 0; j < i; j++)
            {
                if (tomb[j] == szam)
                {
                    egyedi = false;
                    break;
                }
            }
        } while (!egyedi);
        tomb[i] = szam;
    }

    printf("A generalt lottoszamok: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d\t", tomb[i]);
    }
    printf("\n");

    return 0;
}