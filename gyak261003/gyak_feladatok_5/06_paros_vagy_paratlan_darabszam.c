/*
 * 6. Páros vagy páratlan a több?
 * Készíts egy programot C nyelven, amelyik:
 * - Bekér 16 egész számot egy tömbbe,
 * - Kiírja, hogy a páros vagy a páratlan értékből van-e több a tömbben.
 */

 #include <stdio.h>

int main()
{
    int tomb[16];
    int paros = 0;
    int paratlan = 0;
    for (int i = 0; i < 16; i++) {
        printf("Add meg a %d. szamot: ", i + 1);
        scanf("%d", &tomb[i]);
        if (tomb[i] % 2 == 0) {
            paros++;
        } else {
            paratlan++;
        }
    }
    printf("Paros szamok szama: %d\n", paros);
    printf("Paratlan szamok szama: %d\n", paratlan);
    if (paros > paratlan) {
        printf("Tobb paros szam van.\n");
    } else if (paratlan > paros) {
        printf("Tobb paratlan szam van.\n");
    } else {
        printf("Ugyanannyi paros es paratlan szam van.\n");
    }
    return 0;
}