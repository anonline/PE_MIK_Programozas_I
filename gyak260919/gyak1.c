/*1. Mozijegy adatai
Feladat: Készíts egy programot, amely megjeleníti egy mozijegy adatait az alábbi formában:
Film: Az utolso kaland
Terem: 4
Szek: 12
Kezdes: 19:30

2. Játékidő
Feladat: Készíts egy programot, amely bekéri, hogy a felhasználó hány órát játszott egy játékkal, majd megjeleníti a megadott óraszámot.

3. Film hossza
Feladat: Készíts egy programot, amely bekéri egy film hosszát órában, tizedes tört formában, majd megjeleníti a film hosszát percben.

4. Pizza rendelés
Feladat: Készíts egy programot, amely bekéri egy pizza árát és a rendelt pizzák számát. A program számítsa ki és jelenítse meg a rendelés teljes árát.

5. Letöltési idő
Feladat: Készíts egy programot, amely bekéri egy fájl méretét megabájtban és az internetkapcsolat sebességét megabit/másodpercben. A program számítsa ki, körülbelül hány másodperc szükséges a fájl letöltéséhez. A számításhoz használd fel, hogy 1 megabájt (MB) = 8 megabit (Mbit).*/

#include <stdio.h>

void movieTicket()
{
    printf("Film: %s\n", "Az utolsó kaland");
    printf("Terem: %d\n", 4);
    printf("Szek: %d\n", 12);
    printf("Kezdes: %02d:%02d\n", 4, 30);
}

void gameTime()
{
    int gameTime = 0;
    printf("Hány órát játszottál: ");
    scanf("%d", &gameTime);
    printf("Játékóra: %d\n", gameTime);
}

void movieTime()
{
    float movieTime = 0;
    printf("Add meg a film hosszát tizedestört alakban: ");
    scanf("%f", &movieTime);
    int movieMinute = movieTime * 60;
    printf("A film %d perc hosszú.\n", movieMinute);
}

void pizzaOrder()
{
    double pizzaCost = 0;
    unsigned int pizzaQty = 0;
    printf("Mennyibe kerül a pizza: ");
    scanf("%lf", &pizzaCost);
    printf("Hány darab pizza van: ");
    scanf("%u", &pizzaQty);
    printf("Összesen %.0lf Ft\n", (pizzaCost * pizzaQty));
}

void downloadTime(){
    double fileSize = 0;
    double downloadSpeed = 0;
    printf("Fájl mérete (MB): ");
    scanf("%lf", &fileSize);
    printf("Letöltési sebesség (Mb/s): ");
    scanf("%lf", &downloadSpeed);
    printf("A fájl letöltési ideje: ~%d másodperc.\n", (int)((fileSize*8)/downloadSpeed));
}   

int main(int argc, char const *argv[])
{
    movieTicket();
    gameTime();
    movieTime();
    pizzaOrder();
    downloadTime();
    return 0;
}
