#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// A bool típus használatához be kell húzni a stdbool.h fájlt
#include <stdbool.h>

// * ------------------------ I. Változók 1. -------------------------- *
// globális változók
int allCost = 50;

int main() {
	// * ------------------------ I. Változók 2. -------------------------- *
	
	// lokális változók
	// int - egész típusú változó (-/+ értékű is lehet)
	int age = 30;
	int tempreture = -10;

	// float - egyszeres pontosságú lebegőpontos változó (-/+ értékű is lehet)
	float pi = 3.14;

	// double - kétszeres pontosságú lebegőpontos változó (-/+ értékű is lehet)
	double price = 19.99;

	// char - egyetlen karakter tárolása az ASCII alapján
	char grade = 'A';

	// bool - igaz/hamis
	bool isRainy = true;   // igaz
	bool isSunny = false;    // hamis

	//if (isRainy) {
	//	printf("Párás a levegő.\n");
	//}
	//else {
	//	printf("Nincs eső.\n");
	//}

	// Előjel nélküli változók, vagyis csak pozitív értéket (+) vehetnek fel
	// Egy személy életkora nem lehet negatív, és nem lehet több mint 255.
	unsigned int ageOfPerson = 30; 
	// Például egy város lakosságszáma.
	unsigned int populationOfCity = 1000000; 

	// * ------------------- II. Művelet változókkal 1. ------------------- *

	int x = 1;
	int y = 2;
	int z = 3;

	x = y; // értékátadás
	x = 3 + 4 * 5; // vegyes műveletek
	x = ((y + z * 3 - 12) / 4);
	x = 2 * x;
	x = -y * y * y;
	// 2-vel történő maradékos osztás
	// Ez hasznos oszthatóság  vizsgálatánál (páros, páratlan számok ellenőrzése)
	// pl. x % 2 == 0, vagyis x osztható kettővel maradék nélkül
	// Az x értéke tehát attól függ, hogy mi az y értéke. 
	// Ha például y értéke 7, akkor az x értéke lesz 7 % 3, 
	// amely 1, mivel 7-et hárommal osztva a maradék 1.
	x = y % 2; 

	// * ------------------- II. Művelet változókkal 2. ------------------- *

	x += 3; // ez egyenlő a következővel: x=x+3
	x -= 5;
	x *= 2;
	x /= 4;
	x %= 6;
	x++; // x=x+1
	x--; // x=x-1

	// * -------------------- III. Bemenet kiíratása 1. --------------------- *

	int i = 2;
	int x2 = 3;
	int y2 = 3;
	char c = 'B';
	unsigned int u = 1;
	float f = 5.5;
	double d = 3.34;

	// Szöveg kiírása
	printf("Ez egy pelda szoveg.");
	
	// Speciális karakterek(escape sequencies) kezelése (\t - tab, \n - új sor)
	printf("\tEz egy beljebb kezdett szoveg uj sorral a vegen.\n");

	// A kiíratandó változó(ka)t a szöveg után,vesszővel elválasztva kell megadni
	printf ("Az x valtozo erteke: %d\t az y valtozoe: %d\n", x2, y2);

	// * -------------------- III. Bemenet kiíratása 2. --------------------- *
	
	// Egész(int) típusú változó: %d
	printf("Az egesz valtozo erteke : %d\n", i);
	
	// Karakter(char) típusú változó : %c
	printf("A karakter valtozo erteke: %c\n", c);
	
	// Előjel nélküli egész(unsigned int): %u
	printf("Az elojel nelkuli valtozo erteke: %u\n", u);
	
	// Egész szám hexadecimális formában: %x
	printf("Az egesz valtozo erteke hexadecimalisan: %x\n", x);

	// Lebegőpontos(float) változó: %f
	printf("A lebegopontos valtozo erteke: %f\n", f);
	
	// Duplapontosságú(double) változó:%lf
	printf("A duplapontossagu valtozo erteke: %lf\n", d);

	// A változó helyét a memóriában a & jel segítségével lehet lekérdezni
	// Memóriacím kiíratása minden típusnál: %p
	// A memóriacím egy egész szám, amely hexában jelenik meg
	printf("A valtozo a %p cimen talalhato\n", &i);

	// * --------------------- III. Formázott kiíratás --------------------- *

	// Lebegőpontos szám normálalakban:
	printf("%e\n", f);

	// Lebegőpontos szám a jobbnak tűnő alakban (minimalizálja a karakterek számát):
	printf("%g\n", f);

	// Lebegőpontos szám fix tizedes jeggyel (2 jelöli tizedesjegyek számát):
	printf("%.2f\n", f);

	// * -------------------- IV. Kifejezések kiíratás --------------------- *

	// Ha ki szeretnénk íratni a változó(x) háromszorosának értékét, elég ennyi :
	printf("%d\n", 3*x);

	// * --------------------- V. Beolvasás változóba ---------------------- *
	
	// A változó típusát a printf - nél tanultaknak megfelelően jelölni kell
	// A scanf-nek a változó címe kell (vagyis a &number), mivel a memóriába olvas be
	int number;
	scanf("%d", &number);
	//if (scanf("%d", &number));
	
	// Több változót is lehet egyszerre beolvasni
	// int i, j, k;
	// char c;
	// scanf("%d %d %d %c", &i, &j, &k, &c);
	
	// Fontos, hogy azt a bementetet fogja várni a program, amelyet magadunk neki.
	// Tipikus hiba, hogy valaki a beolvasáskor is beírja a \n (sortörést), 
	// amely esetében egy sortörést is várni fog a program.
	// Pl. scanf("%d\n", &a); (EZ NEM JAVASOLT!)

	// * --------- VI. Visszatérés nélküli függvények (eljárások) --------- *
	
	// Olyan különálló kódrészlet, amely valamilyen feladatot végez el, 
	// és nincs visszatérési értéke.
	// Egy függény lehet: visszatéréses, visszatérés nélküli, 
	// paraméteres, paraméter nélküli

	// Egy függvény, ami kiír egy szöveget
	
	//void udvozles()
	//{
	//	printf("Udvozollek dicso lovag!\n");
	//}

	//int main()
	//{
	//	udvozles(); // az eljárás meghívása
	//	return 0;
	//}

	return 0;
}