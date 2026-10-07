/*
 * 6. Bekérés – számolás – kiírás 4: globális változók és eljárások
 * Készíts egy programot C nyelven az alábbiak szerint:
 * - Legyen benne kettő globális, lebegőpontos változó
 * - Tartalmazza az alábbi eljárásokat:
 *   - Egy eljárás az egyik, és egy másik eljárás a másik változó bekérésére
 *   - Egy eljárás, ami az előző kettőt felhasználva bekéri a két értéket
 *   - Egy eljárás, amely egy harmadik globális változóba kiszámolja a kettő szorzatát
 *   - Egy eljárás, amely kiírja az eredményt 2 tizedesjegy pontossággal
 *   - Egy eljárás, amely a fentieket felhasználva bekéri a két értéket, majd megjeleníti a szorzatukat
 * - A program kérjen be kettő számot és jelenítse meg a szorzatukat a megírt eljárásokat
 *   felhasználva. Ezt hajtsa végre összesen háromszor.
 */

#include <stdio.h>

float szam1, szam2, szorzat;

void beker_szam1(void) {
    printf("Kerem az első szamot: ");
    scanf("%f", &szam1);
}

void beker_szam2(void) {
    printf("Kerem a második szamot: ");
    scanf("%f", &szam2);
}

void adat_bekeres(void) {
    beker_szam1();
    beker_szam2();
}

void szorzat_szamitas(void) {
    szorzat = szam1 * szam2;
}

void eredmeny_kiiras(void) {
    printf("A szorzat: %.2f\n", szorzat);
}

int main() {
    for (int i = 0; i < 3; i++) {
        adat_bekeres();
        szorzat_szamitas();
        eredmeny_kiiras();
    }
    return 0;
}
