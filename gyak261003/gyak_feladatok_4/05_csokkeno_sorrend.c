/*
 * 5. Csökkenő sorrend
 * Készíts egy programot C nyelven, amelyik:
 * - Lebegőpontos számokat kér be egészen addig, amíg azok csökkenő sorrendben vannak,
 * - Akkor áll le, ha az újonnan beírt szám nagyobb az előzőnél,
 * - A végén írja ki, hogy mennyi számot sikerült megfelelően beírni
 *   (az utolsó, rossz értéket nem számolva).
 */
#include <stdio.h>

int main() {
    float szam, elozo_szam;
    int szamok_szama = 1;

    printf("Adj meg egy lebegopontos szamot: ");
    scanf("%f", &elozo_szam);

    printf("Adj meg egy lebegopontos szamot: ");
    scanf("%f", &szam);

    while (szam < elozo_szam) {
        szamok_szama++;
        elozo_szam = szam;
        
        printf("Adj meg egy lebegopontos szamot: ");
        scanf("%f", &szam);
    }

    printf("A megfeleloen beirt szamok darabszama: %d\n", szamok_szama);
    
    return 0;
}
