/*
 * 6. Teli téglalap
 * Készíts egy programot C nyelven, amelyik:
 * - Bekér kettő egész számot (szélesség és magasság),
 * - Kirajzol a kimenetre egy ekkora téglalapot valamilyen (pl. #) karakterekből.
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
            printf("#");
        }
        printf("\n");
    }

    return 0;
}
