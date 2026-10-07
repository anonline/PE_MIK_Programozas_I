/*
 * 14. Boldog számok
 * Tekintsük a következő folyamatot. Veszünk egy egész számot. Kiszámoljuk a számjegyeinek
 * négyzetösszegét. Például 145-ből lesz 1*1 + 4*4 + 5*5 = 42. Az így kapott számra az
 * eljárást ismételjük újra és újra. Ha a folyamat során valamikor eljutunk az 1-hez, akkor
 * a kiinduló szám boldog, egyébként nem.
 *
 * Például:
 * A 109 boldog szám, mert 109 => 82 => 68 => 100 => 1.
 * Az 59 nem boldog szám, mert 59 => 106 => 37 => 58 => 89 => 145 => 42 => 20 => 4 => 16
 * => 37 => ...
 * Megjegyzés: A nem boldog számok esetén a sorozat végtelen ciklusba fut; ennek elemei
 * fent is láthatóak (37-től). Az egyjegyű számok közül az 1-en kívül csak a 7 boldog.
 *
 * Készíts egy programot C nyelven, amelyik:
 * - Bekér egy egész számot,
 * - Kiírja, hogy a szám boldog-e.
 */
#include <stdio.h>

int szamjegyek_negyzetosszege(int szam) {
    int osszeg = 0;
    while (szam != 0) {
        int szamjegy = szam % 10;
        osszeg += szamjegy * szamjegy;
        szam /= 10;
    }
    return osszeg;
}

int main() {
    int szam;
    printf("Add meg a szamot: ");
    scanf("%d", &szam);

    int aktualis = szam;
    while (aktualis != 1 && aktualis != 4) {
        printf("%d => ", aktualis);
        aktualis = szamjegyek_negyzetosszege(aktualis);
    }
    printf("%d\n", aktualis);

    if (aktualis == 1) {
        printf("A szám boldog.\n");
    } else {
        printf("A szám nem boldog.\n");
    }

    return 0;
}
