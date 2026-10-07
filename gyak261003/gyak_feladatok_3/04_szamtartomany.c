/*
 * 4. Számtartomány
 * Készíts egy programot C nyelven, amelyik:
 * - Bekér két számot, ezek adják a tartomány határait (mindig az elsőnek beírt szám a kisebb),
 * - Bekér egy harmadik számot,
 * - Válaszként kiírja, hogy a harmadik szám az első kettő által definiált tartományon belül esik-e,
 *   annak a határán van (valamelyik határral megegyezik), vagy azon kívül esik.
 */
#include <stdio.h>

int main() {
    int also, felso, szam;
    printf("Kerem az also hatart: ");
    scanf("%d", &also);
    do
    {
        printf("Kerem a felso hatart: ");
        scanf("%d", &felso);

        if (felso <= also) {
            printf("A felso hatarnak nagyobbnak kell lennie az also hatarnal. Kerem probalja ujra.\n");
        }
    } while (felso <= also);
    
    printf("Kerem a szamot: ");
    scanf("%d", &szam);

    if (szam > also && szam < felso) {
        printf("A szam a tartomanyon belul esik.\n");
    } else if (szam == also || szam == felso) {
        printf("A szam a tartomany hataran van.\n");
    } else {
        printf("A szam azon kivul esik.\n");
    }

    return 0;
}
