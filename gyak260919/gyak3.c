/*
1. Robot ellenőrző üzenetei
Feladat: Készíts egy programot, amely ötször kiírja:
Robot ellenorzes folyamatban...

2. Visszaszámlálás
Feladat: Készíts egy programot, amely 10-től 1-ig visszaszámol, majd kiírja:
Indulas!

3. Napi lépésszám
Feladat: Készíts egy programot, amely bekéri, hogy hány nap adatait szeretnénk megadni. Ezután minden napra kérje be a megtett lépések számát, és a bekérés során jelenítse meg az adott nap sorszámát.

4. PIN-kód bekérése
Feladat: Készíts egy programot, amely addig kéri be a PIN-kódot, amíg a felhasználó a 1234 értéket nem adja meg. Sikeres megadás után írja ki:
Sikeres belepes!

5. Pontgyűjtés
Feladat: Készíts egy programot, amely bekéri, hogy egy játékos hány pályát teljesített. Ezután minden pályához kérje be a megszerzett pontszámot, és a végén írja ki az összpontszámot.

6. Pénztár napi forgalma
Egy boltban egy napon 8 vásárló vásárol. Kérje be minden vásárló vásárlásának összegét, majd:
- számítsa ki a teljes napi bevételt,
- számolja meg, hány vásárló költött legalább 10 000 Ft-ot,
- a végén írja ki mindkét eredményt.

7. Addig próbálkozhatsz
Feladat: Készíts egy programot, amely bekér egy egész számot. Ha a szám nem 7, kérje be újra. A program csak akkor fejeződjön be, ha a felhasználó a 7 értéket adta meg.

8. Véletlen számok
Feladat: Készíts egy programot, amely 10 darab véletlen egész számot generál 1 és 100 között, és minden számot kiír. A véletlenszám-generáláshoz használd a rand() függvényt. A generátor inicializálásához használd a srand() és time() függvényeket.

9. Futárküldemények
Feladat: Készíts egy programot, amely egy futár 8 küldeményt ellenőriz. Minden küldeménynél kérje be a csomag tömegét kilogrammban. A program számolja meg, hogy hány olyan csomag volt, amelynek tömege legfeljebb 5 kg. A végén írja ki a megfelelő tömegű csomagok számát.

10. Akkumulátor töltése
Készíts egy programot, amely egy telefon akkumulátorának töltését szimulálja. A program kérje be az akkumulátor kezdeti töltöttségét százalékban. A töltés során az akkumulátor óránként 10 százalékponttal növekszik. A program addig ismételje a töltést, amíg az akkumulátor el nem éri a 100%-ot. Minden óra után írja ki az aktuális töltöttséget, majd a végén írja ki, hány órára volt szükség.

Példa:
Kezdeti töltöttség: 65
1. óra után: 75%
2. óra után: 85%
3. óra után: 95%
4. óra után: 100%

A töltés 4 óraig tartott.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void robotEllenorzes()
{
    for (int i = 0; i < 5; i++)
    {
        printf("Robot ellenorzes folyamatban...\n");
    }
}

void visszaszamolas()
{
    for (int i = 10; i > 0; i--)
    {
        printf("%d\n", i);
    }
    printf("Indulás!\n");
}

void lepesekszama()
{
    int napokSzama = 0;
    printf("Hány nap adatait szeretnéd megadni: ");
    scanf("%d", &napokSzama);

    for (int i = 0; i < napokSzama; i++)
    {
        int lepesek = 0;
        printf("Add meg a %d. nap lépésszámát: ", i + 1);
        scanf("%d", &lepesek);
        printf("%d. nap lépésszáma: %d\n", i + 1, lepesek);
    }
}

void pinKodBekere()
{
    int input = 0;
    do
    {
        printf("Add meg a PIN-kódot: ");
        scanf("%d", &input);
    } while (input != 1234);
    printf("Sikeres belépés!\n");
}

void pontgyujtes()
{
    int palyakSzama = 0;
    printf("Hány pályát teljesítettél: ");
    scanf("%d", &palyakSzama);

    int osszPontszam = 0;
    for (int i = 0; i < palyakSzama; i++)
    {
        int pontszam = 0;
        printf("Add meg a %d. pálya pontszámát: ", i + 1);
        scanf("%d", &pontszam);
        osszPontszam += pontszam;
    }
    printf("Összpontszám: %d\n", osszPontszam);
}

void penztarForgalom()
{
    int vasarlokSzama = 8;
    double teljesBevetel = 0;
    int nagyVasarlokSzama = 0;

    for (int i = 0; i < vasarlokSzama; i++)
    {
        double vasarlasOsszeg = 0;
        printf("Add meg a %d. vásárló vásárlásának összegét: ", i + 1);
        scanf("%lf", &vasarlasOsszeg);
        teljesBevetel += vasarlasOsszeg;
        if (vasarlasOsszeg >= 10000)
        {
            nagyVasarlokSzama++;
        }
    }

    printf("Teljes napi bevétel: %.2lf Ft\n", teljesBevetel);
    printf("Nagy vásárlók száma: %d\n", nagyVasarlokSzama);
}

void amignem7()
{
    int szam = 0;
    while (szam != 7)
    {
        printf("Adj meg egy egész számot: ");
        scanf("%d", &szam);
    }

    printf("A megadott szám 7!\n");
}

void veletlenSzamok()
{
    srand(time(NULL));
    for (int i = 0; i < 10; i++)
    {
        //Akármit is generál a 100-as maradék osztás miatt a maradék mindenképpen 0 és 99 között lesz.
        //A +1 miatt a generált szám 1 és 100 között lesz.
        int veletlenSzam = rand() % 100 + 1;
        printf("%d\n", veletlenSzam);
    }
}

void futarKuldemenyek()
{
    int csomagokSzama = 8;
    int megfeleloCsomagokSzama = 0;

    for (int i = 0; i < csomagokSzama; i++)
    {
        double tomeg = 0;
        printf("Add meg a %d. csomag tömegét (kg): ", i + 1);
        scanf("%lf", &tomeg);
        if (tomeg <= 5)
        {
            megfeleloCsomagokSzama++;
        }
    }

    printf("A megfelelő tömegű csomagok száma: %d\n", megfeleloCsomagokSzama);
}

void telefontoltes()
{
    int toltes = 0;
    printf("Add meg az akkumulátor kezdeti töltöttségét (%%): ");
    scanf("%d", &toltes);

    int ora = 0;
    while (toltes < 100)
    {
        ora++;
        toltes += 10;
        if (toltes > 100)
        {
            toltes = 100;
        }
        printf("%d. óra után: %d%%\n", ora, toltes);
    }

    printf("A töltés %d óráig tartott.\n", ora);
}

int main(int argc, char const *argv[])
{
    robotEllenorzes();
    visszaszamolas();
    lepesekszama();
    pinKodBekere();
    pontgyujtes();
    penztarForgalom();
    amignem7();
    veletlenSzamok();
    futarKuldemenyek();
    telefontoltes();

    return 0;
}