/*
 * 8. Számtartomány 2
 * Készíts egy programot C nyelven, amelyik:
 * - Bekér két számot, ezek adják a tartomány határait, de ezúttal nem tudjuk,
 *   hogy az elsőnek vagy a másodiknak beírt a kisebb,
 * - Bekér egy harmadik számot,
 * - Válaszként kiírja, hogy a harmadik szám az első kettő által definiált tartományon belül esik-e,
 *   annak a határán van (valamelyik határral megegyezik), vagy azon kívül esik.
 */
#include <stdio.h>

typedef struct TartomanyTipus {
    int also;
    int felso;
} Tartomany;

Tartomany tartomany_letrehoz(int szam1, int szam2) {
    Tartomany tartomany;
    if (szam1 < szam2) {
        tartomany.also = szam1;
        tartomany.felso = szam2;
    } else {
        tartomany.also = szam2;
        tartomany.felso = szam1;
    }
    return tartomany;
}

int main() {
    int szam1, szam2, szam;
    printf("Kerem az elso szamot: ");
    scanf("%d", &szam1);
    printf("Kerem a masodik szamot: ");
    scanf("%d", &szam2);    
    Tartomany tartomany = tartomany_letrehoz(szam1, szam2);
    printf("Kerem a szamot: ");
    scanf("%d", &szam);

    if (szam > tartomany.also && szam < tartomany.felso) {
        printf("A szam a tartomanyon belul esik.\n");
    } else if (szam == tartomany.also || szam == tartomany.felso) {
        printf("A szam a tartomany hataran van.\n");
    } else {
        printf("A szam azon kivul esik.\n");
    }

    return 0;
}
