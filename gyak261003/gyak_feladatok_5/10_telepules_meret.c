/*
 * 10. Település méret
 * Készíts egy programot C nyelven, amelyik:
 * - Bekéri egy település nevét (szöveg) és lakosainak számát (egész),
 * - Megjeleníti a kimeneten, hogy a település minek tekinthető.
 *   Például: „Szeged nagyváros, mivel 161879 lakosa van”
 *
 * Típus neve    Lakosságszám
 * Törpefalu     200 fő alatt
 * Aprófalu      200 - 500 fő
 * Kisfalu       500 - 1000 fő
 * Község        1000 - 5000 fő
 * Kisváros      5 - 20 ezer fő
 * Középváros    10 - 100 ezer fő
 * Nagyváros     100 ezer - 1 millió fő
 * Metropolisz   1 millió fő fölött
 */

 #include <stdio.h>

char *telepules_meret(int lakossag)
{
    if (lakossag < 200) {
        return "Törpefalu";
    } else if (lakossag < 500) {
        return "Aprófalu";
    } else if (lakossag < 1000) {
        return "Kisfalu";
    } else if (lakossag < 5000) {
        return "Község";
    } else if (lakossag < 20000) {
        return "Kisváros";
    } else if (lakossag < 100000) {
        return "Középváros";
    } else if (lakossag < 1000000) {
        return "Nagyváros";
    } else {
        return "Metropolisz";
    }
}

int main()
{
    char telepules[100];
    int lakossag;

    printf("Add meg a település nevét: ");
    scanf("%s", telepules);
    printf("Add meg a lakosság számát: ");
    scanf("%d", &lakossag);

    printf("%s %s, mivel %d lakosa van\n", telepules, telepules_meret(lakossag), lakossag);
    
    return 0;
}
