/*
 * 11. Magánhangzók száma
 * Készíts egy programot C nyelven, amelyik:
 * - Bekér egy szöveget,
 * - Kiírja, hogy a szövegben mennyi magánhangzó van.
 */
#include <stdio.h>

char kisbeture(char c)
{
    if (c >= 'A' && c <= 'Z') {
        return c + ('a' - 'A');
    }
    return c;
}

int main()
{
    char* maganhangzok = "aeiou";
    char szoveg[1000];
    int maganhangzo_szam = 0;

    printf("Add meg a szoveget: ");
    fgets(szoveg, sizeof(szoveg), stdin);

    for (int i = 0; szoveg[i] != '\0'; i++) {
        char c = kisbeture(szoveg[i]);
        for (int j = 0; maganhangzok[j] != '\0'; j++) {
            if (c == maganhangzok[j]) {
                maganhangzo_szam++;
                break;
            }
        }
    }

    printf("A szovegben %d maganhangzo van.\n", maganhangzo_szam);
    return 0;
}