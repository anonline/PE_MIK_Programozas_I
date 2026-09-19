/*
1. Bevásárlás
Feladat: Készíts egy programot, amely bekéri két termék árát és a megvásárolt darabszámokat, majd kiírja a teljes vásárlás értékét.

2. Kedvezményes vásárlás
Feladat: Készíts egy programot, amely bekéri egy vásárlás végösszegét és a kedvezmény százalékos értékét, majd kiírja a kedvezmény összegét és a fizetendő összeget.

3. Pénzváltás
Feladat: Készíts egy programot, amely bekéri, hogy hány forintot szeretnénk euróra váltani, valamint az euró árfolyamát forintban. A program írja ki, hogy hány teljes eurót kapunk, és hány forint marad. Például 100 000 Ft és 400 Ft/€ árfolyam esetén 250 €-t kapunk, maradék nélkül.

4. Filmnézés
Feladat: Készíts egy programot, amely bekéri egy film hosszát percben és azt, hogy hányszor szeretnénk megnézni. A program számítsa ki, összesen hány percet töltenénk filmnézéssel.

5. Fényképezőgép tárhelye
Feladat: Készíts egy programot, amely bekéri egy fényképezőgéppel készített fénykép átlagos méretét megabájtban, valamint a rendelkezésre álló tárhely méretét gigabájtban. A program számítsa ki, hogy körülbelül hány ilyen fénykép fér el a tárhelyen. A számításhoz használd, hogy 1 GB = 1024 MB.

6. Játékidő és szünetek
Feladat: Egy játékos három pályát teljesít. Készíts egy programot, amely bekéri a három pálya teljesítési idejét percben, valamint a pályák közötti két szünet hosszát percben. A program számítsa ki, hogy összesen hány percet töltött a játékhoz kapcsolódóan.

7. Hőmérséklet
Feladat: Készíts egy programot, amely bekéri egy helyiség hőmérsékletét Celsius-fokban. Ha a hőmérséklet 18 fok alatt van, írja ki: „Futes szukseges!”.

8. Játék nehézségi szint
Feladat: Készíts egy programot, amely bekéri egy játékos pontszámát. Ha a pontszám legalább 1000, írja ki: „Arany szint”. Ellenkező esetben írja ki: „Ezust szint”.

9. Csomag mérete
Feladat: Készíts egy programot, amely bekéri egy csomag tömegét kilogrammban és térfogatát literben.
A program írja ki:
- "Kis csomag", ha a tömege legfeljebb 5 kg és a térfogata legfeljebb 10 liter;
- "Nagy csomag" minden más esetben.

10. Akkumulátor töltöttsége
Feladat: Készíts egy programot, amely bekéri egy eszköz akkumulátorának töltöttségét százalékban.
A program írja ki:
- "Alacsony töltöttség", ha 20% alatt van;
- "Megfelelő töltöttség", ha legalább 20%, de legfeljebb 80%;
- "Magas töltöttség", ha 80% felett van.
*/

#include <stdio.h>

void bevasarlas(){
    int sum = 0;

    for (int i = 0; i < 2; i++)
    {
        int ar = 0;
        int mennyiseg = 0;
        printf("Add meg a %d. termék árát: ", i+1);
        scanf("%d", &ar);
        printf("Add meg a %d. termék mennyiségét: ", i+1);
        scanf("%d", &mennyiseg);
        sum += ar * mennyiseg;   
    }
    printf("A bevásárlás végösszege %d Ft\n", sum);
}

void kedvezmeny(){
    int total = 0;
    int discountPercent = 0;
    printf("Add meg a vásárlás végösszegét: ");
    scanf("%d", &total);
    printf("Add meg a kedvezmény százalékot (%%): ");
    scanf("%d", &discountPercent);
    int discount = total*discountPercent/100;
    printf("Kedvezmény mértéke: %d %%\nVégösszeg: %d Ft\n", discount, total-discount);
}

void penzvalto() {
    int hufAmount = 0;
    int eurInHuf= 0;
    printf("Hány forintot szeretnénk euróra váltani: ");
    scanf("%d", &hufAmount);
    printf("Hány forint most egy euró: ");
    scanf("%d", &eurInHuf);
    int maradek = hufAmount % eurInHuf;
    printf("%d eurót kapunk és %d Ft marad\n", hufAmount/eurInHuf, maradek);
}

void filmnezes() {
    int filmhossz = 0;
    int hanyszor = 0;
    printf("Hány perces a film: ");
    scanf("%d", &filmhossz);
    printf("Hányszor akarjuk megnézni: ");
    scanf("%d", &hanyszor);
    printf("Összesen ez %d perc lesz.\n", filmhossz*hanyszor);
}

void fenykepezogep() {
    double atlagosKepMeretMb = 0;
    double tarhelyGb = 0;
    printf("Mekkora egy átlagos kép (MB): ");
    scanf("%lf", &atlagosKepMeretMb);
    printf("Mekkora a tárhely (GB): ");
    scanf("%lf", &tarhelyGb);
    printf("A tárhelyre kb. %d kép fér el.\n", (int)((tarhelyGb*1024)/atlagosKepMeretMb));
}

void jatekidotSzamol() {
    int jatekido = 0;

    for (int i = 0; i < 3; i++)
    {
        int palyaHossz = 0;
        printf("Add meg a %d. pálya hosszát percben: ", i+1);
        scanf("%d", &palyaHossz);
        jatekido += palyaHossz;
    }

    for (int i = 0; i < 2; i++)
    {
        int szunetHossz = 0;
        printf("Add meg a %d. szünet hosszát percben: ", i+1);
        scanf("%d", &szunetHossz);
        jatekido += szunetHossz;
    }
    
    printf("Összesen %d percet töltöttél játékidővel.\n", jatekido);
}

void homerseklet() {
    int homerseklet = 0;
    printf("Add meg a hőmérsékletet Celsius fokban: ");
    scanf("%d", &homerseklet);
    if (homerseklet < 18)
    {
        printf("Fűtés szükséges!\n");
    }
}

void jatekNehezsegiSzint() {
    int pontszam = 0;
    printf("Add meg a pontszámod: ");
    scanf("%d", &pontszam);
    if (pontszam >= 1000)
    {
        printf("Arany szint\n");
        return;
    }

    printf("Ezüst szint\n");
}

void csomagMerete() {
    double tomeg = 0;
    double terfogat = 0;
    printf("Add meg a csomag tömegét (kg): ");
    scanf("%lf", &tomeg);
    printf("Add meg a csomag térfogatát (l): ");
    scanf("%lf", &terfogat);
    if (tomeg <= 5 && terfogat <= 10)
    {
        printf("Kis csomag\n");
        return;
    }
    printf("Nagy csomag\n");
}

void akkumulátorToltottsege() {
    int toltottseg = 0;
    printf("Add meg az akkumulátor töltöttségét (%%): ");
    scanf("%d", &toltottseg);
    
    if (toltottseg < 20)
    {
        printf("Alacsony töltöttség\n");
        return;
    }
    
    if (toltottseg <= 80)
    {
        printf("Megfelelő töltöttség\n");
        return;
    }

    printf("Magas töltöttség\n");
}
int main(int argc, char const *argv[])
{
    bevasarlas();
    kedvezmeny();
    penzvalto();
    filmnezes();
    fenykepezogep();
    jatekidotSzamol();
    homerseklet();
    jatekNehezsegiSzint();
    csomagMerete();
    akkumulátorToltottsege();
    return 0;
}
