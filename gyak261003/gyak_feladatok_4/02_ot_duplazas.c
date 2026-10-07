/*
 * 2. Öt duplázás
 * Készíts egy programot C nyelven, amelyik:
 * - Bekér 5 darab lebegőpontos számot,
 * - Minden bekérés után írja ki a bekért szám dupláját.
 */
#include <stdio.h>

int main() {
    float szam;
    for (int i = 0; i < 5; i++) {
        printf("Adj meg egy lebegopontos szamot: ");
        scanf("%f", &szam);
        printf("A bekert szam duplazottan: %.2f\n", szam * 2);
    }
    return 0;
}
