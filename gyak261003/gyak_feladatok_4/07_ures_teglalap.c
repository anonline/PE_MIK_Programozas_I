/*
 * 7. Üres téglalap
 * Készíts egy programot C nyelven, amelyik:
 * - Bekér kettő egész számot (szélesség és magasság),
 * - Kirajzol a kimenetre egy ekkora, ezúttal üres téglalapot
 *   (pl. a keret #, a belseje szóköz).
 */
#include <stdio.h>

int main() {
    int szel, mag;
    printf("Add meg a szelesseget: ");
    scanf("%d", &szel);
    printf("Add meg a magassagot: ");
    scanf("%d", &mag);
    for (int i = 0; i < mag; i++) {
        for (int j = 0; j < szel; j++) {
            if (i == 0 || i == mag - 1 || j == 0 || j == szel - 1) {
                printf("#");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
