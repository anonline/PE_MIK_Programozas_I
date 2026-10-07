/*
 * 12. ABC generálás
 * Készíts egy programot C nyelven, amelyik:
 * - Bekér egy egész számot, amelyről tudjuk, hogy 1000-nél nem nagyobb,
 * - Generál egy szöveget, ami az angol ABC kisbetűit ismétli úgy, hogy a karakterek száma a bekért
 *   érték legyen.
 *
 * Példák:
 * Bemenet: 6,  Kimenet: abcdef
 * Bemenet: 16, Kimenet: abcdefghijklmnop
 * Bemenet: 30, Kimenet: abcdefghijklmnopqrstuvwxyzabcd
 * Bemenet: 58, Kimenet: abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdef
 */
#include <stdio.h>

int main()
{
    int n;
    do
    {
        printf("Add meg a karakterek szamat (max 1000): ");
        scanf("%d", &n);
        if (n < 1 || n > 1000)
        {
            printf("Hibas ertek! A szamnak 1 es 1000 kozott kell lennie.\n");
        }
    } while (n < 1 || n > 1000);

    for (int i = 0; i < n; i++)
    {
        char c = 'a' + (i % ('z' - 'a' + 1));
        printf("%c", c);
    }
    printf("\n");

    return 0;
}
