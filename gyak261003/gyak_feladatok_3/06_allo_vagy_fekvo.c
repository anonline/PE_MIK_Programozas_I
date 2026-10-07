/*
 * 6. Álló vagy fekvő
 * Készíts egy programot C nyelven, amelyik:
 * - Beolvassa egy kép felbontását (két egész szám, szélesség és magasság),
 * - Kiírja, hogy a kép álló vagy fekvő formátumú.
 */
#include <stdio.h>

int main() {
    int szelesseg, magassag;
    printf("Kerem a kep szelesseget: ");
    scanf("%d", &szelesseg);
    printf("Kerem a kep magassagat: ");
    scanf("%d", &magassag);
    
    if (szelesseg > magassag) {
        printf("A kep fekvo formatumu.\n");
    } else if (szelesseg < magassag) {
        printf("A kep allo formatumu.\n");
    } else {
        printf("A kep negyzetes formatumu.\n");
    }

    return 0;
}
