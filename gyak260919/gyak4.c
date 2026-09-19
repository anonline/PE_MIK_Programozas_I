/*
1. Parkolóhelyek állapota
Feladat: Készíts egy programot, amely egy parkoló 6 helyének állapotát tárolja egy tömbben.
A felhasználó minden parkolóhelyhez adjon meg egy értéket:
- 0 (ures)
- 1 (foglalt)
A program a végén írja ki a parkolóhelyek állapotát.

2. Termékárak
Feladat: Készíts egy programot, amely egy boltban 5 termék árát tárolja egy tömbben. A program kérje be az árakat, majd írja ki őket egymás után.

3. Játékos felszerelései
Feladat: Egy játékos 5 felszerelési tárgyának erősségét egy tömb tárolja.
Kezdetben a tömb értékei:
10 25 18 32 15

Készíts egy programot, amely:
- létrehozza a tömböt ezekkel az értékekkel,
- kiírja az összes értéket,
- majd kiírja a 3. felszerelés erősségét.

4. Raktári készlet
Feladat: Egy raktárban 6 termékből a következő mennyiségek vannak:
12 8 25 14 6 19
Készíts egy programot, amely kiszámolja, hogy összesen hány termék található a raktárban.

5. Nagy csomagok
Feladat: Készíts egy programot, amely 8 csomag tömegét tárolja egy tömbben kilogrammban. A program kérje be a tömegeket, majd számolja meg, hogy hány csomag tömege nagyobb 10 kg-nál.

6. Kávéautomata eladásai
Feladat: Egy kávéautomata 7 napon keresztül rögzítette az eladott kávék számát. Kérd be a 7 napi értéket egy tömbbe, majd számítsd ki az átlagosan naponta eladott kávék számát. Az eredményt két tizedesjeggyel írd ki.

7. Legnagyobb rendelés
Feladat: Egy webáruház 6 rendelés értékét tárolja egy tömbben. Kérd be a rendelési összegeket forintban, majd keresd meg, hogy mekkora volt a legnagyobb rendelés.

8. Legalacsonyabb akkumulátortöltöttség
Feladat: Egy telefon egy nap során 6 alkalommal rögzítette az akkumulátor töltöttségét. Kérd be a 6 értéket egy tömbbe, majd keresd meg, hogy mekkora volt a legalacsonyabb töltöttség.

9. Van-e hibás mérés?
Feladat: Egy gép 8 mérési eredményt tárol egy tömbben. A -1 érték hibás mérésnek számít. Készíts egy programot, amely megvizsgálja, hogy van-e hibás mérés a tömbben.
A program:
- kérje be a 8 mérési eredményt,
- ha talál -1 értéket, írja ki: Hibas meres talalhato!
- ha nincs, írja ki: Minden meres megfelelo.

10. Edzőtermi belépések
Feladat: Egy edzőterem 10 napig rögzítette, hogy naponta hány belépés történt.
Készíts egy programot, amely:
- bekéri a 10 napi értéket egy tömbbe,
- kiszámolja az összes belépés számát,
- megkeresi a legtöbb belépéssel rendelkező nap értékét,
- megszámolja, hány napon volt legalább 50 belépés.
A végén írja ki mindhárom eredményt.
*/

#include <stdio.h>

void parkolohelyekAllapota()
{
    int parkolo[6];
    for (int i = 0; i < 6; i++)
    {
        printf("Add meg %d. parkolóhely állapotát (0: üres, 1: foglalt): ", i + 1);
        scanf("%d", &parkolo[i]);
    }

    printf("Parkolóhelyek állapota:\n");
    for (int i = 0; i < 6; i++)
    {
        printf("Parkolóhely %d: %s\n", i + 1, parkolo[i] == 0 ? "üres" : "foglalt");
    }
}

void termekArak()
{
    double arak[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Add meg %d. termék árát: ", i + 1);
        scanf("%lf", &arak[i]);
    }

    printf("Termékárak:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Termék %d ára: %.0lf Ft\n", i + 1, arak[i]);
    }
}

void felszerelesek()
{
    int felszereles[5] = {10, 25, 18, 32, 15};

    printf("Felszerelések erőssége:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Felszerelés %d: %d\n", i + 1, felszereles[i]);
    }

    printf("A 3. felszerelés erőssége: %d\n", felszereles[2]);
}

void raktariKeszlet()
{
    int keszlet[6] = {12, 8, 25, 14, 6, 19};
    int osszesen = 0;

    for (int i = 0; i < 6; i++)
    {
        osszesen += keszlet[i];
    }

    printf("Összesen %d termék található a raktárban.\n", osszesen);
}

void nagyCsomagok()
{
    double csomagok[8];
    int nagyCsomagokSzama = 0;

    for (int i = 0; i < 8; i++)
    {
        printf("Add meg %d. csomag tömegét (kg): ", i + 1);
        scanf("%lf", &csomagok[i]);
        if (csomagok[i] > 10)
        {
            nagyCsomagokSzama++;
        }
    }

    printf("A 10 kg-nál nehezebb csomagok száma: %d\n", nagyCsomagokSzama);
}

void kaveAutomataEladasai()
{
    int eladasok[7];
    int osszesen = 0;

    for (int i = 0; i < 7; i++)
    {
        printf("Add meg %d. napi eladott kávék számát: ", i + 1);
        scanf("%d", &eladasok[i]);
        osszesen += eladasok[i];
    }

    double atlag = (double)osszesen / 7;
    printf("Átlagosan naponta %.2lf kávét adtak el.\n", atlag);
}

void legnagyobbRendeles()
{
    double rendelesek[6];
    double legnagyobb = 0;

    for (int i = 0; i < 6; i++)
    {
        printf("Add meg %d. rendelés összegét (Ft): ", i + 1);
        scanf("%lf", &rendelesek[i]);
        if (rendelesek[i] > legnagyobb)
        {
            legnagyobb = rendelesek[i];
        }
    }

    printf("A legnagyobb rendelés összege: %.0lf Ft\n", legnagyobb);
}

void legalacsonyabbAkkumulatorToltottseg()
{
    int toltottsegek[6];
    int legalacsonyabb = 100;

    for (int i = 0; i < 6; i++)
    {
        printf("Add meg %d. akkumulátor töltöttséget (%%): ", i + 1);
        scanf("%d", &toltottsegek[i]);
        if (toltottsegek[i] < legalacsonyabb)
        {
            legalacsonyabb = toltottsegek[i];
        }
    }

    printf("A legalacsonyabb akkumulátor töltöttség: %d%%\n", legalacsonyabb);
}

void hibasMeresek()
{
    int meresek[8];
    int hibasTalalhato = 0;

    for (int i = 0; i < 8; i++)
    {
        printf("Add meg %d. mérési eredményt: ", i + 1);
        scanf("%d", &meresek[i]);
        if (meresek[i] == -1)
        {
            hibasTalalhato = 1;
        }
    }

    if (hibasTalalhato)
    {
        printf("Hibas mérés található!\n");
        return;
    }

    printf("Minden mérés megfelelő.\n");
}

void edzoterem()
{
    int belepesek[10];
    int osszesen = 0;
    int legtobbBelépés = 0;
    int legalabb50Szam = 0;

    for (int i = 0; i < 10; i++)
    {
        printf("Add meg %d. napi belépések számát: ", i + 1);
        scanf("%d", &belepesek[i]);
        osszesen += belepesek[i];
        if (belepesek[i] > legtobbBelépés)
        {
            legtobbBelépés = belepesek[i];
        }
        if (belepesek[i] >= 50)
        {
            legalabb50Szam++;
        }
    }

    printf("Összes belépés: %d\n", osszesen);
    printf("A legtöbb belépéssel rendelkező nap értéke: %d\n", legtobbBelépés);
    printf("Hány napon volt legalább 50 belépés: %d\n", legalabb50Szam);
}

int main(int argc, char const *argv[])
{
    parkolohelyekAllapota();
    termekArak();
    felszerelesek();
    raktariKeszlet();
    nagyCsomagok();
    kaveAutomataEladasai();
    legnagyobbRendeles();
    legalacsonyabbAkkumulatorToltottseg();
    hibasMeresek();
    edzoterem();

    return 0;
}
