#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

	// * ------------------------ I. Ciklus -------------------------- *
	// A ciklus egy olyan kódrészlet,
	// amely egymás után többször is lefut.
	// A futás mennyisége egy feltételtől függ,
	// amely minden végrehajtás előtt/után eldönti,
	// hogy szükség van e a következő végrehajtásra.

	// * ------------------- I/2. A while (elöltesztelő) ciklus -------------------- *

	//A while kulcsszó használatával 
	//elöltesztelős ciklust lehet létrehozni.
	
	//A ciklusmag minden lefutása	előtt 
	//a program ellenőrzi a feltételt.
	
	//Amennyiben a feltétel igaz, a ciklusmag
	//lefut még egyszer, egyébként a ciklus leáll
	//és a program a következő sornál	folytatódik.

	// HINTS: Visual Studioban, ha leírod a while kulcsszót,
	// és nyomsz ezt követően nyomsz egy TAB billentyűt,
	// az alap szintaxist le fogja generálni

	int counter = 1;
	while (counter < 1) {
		printf("Ez a while ciklusmagja\n");
		counter++;
	}

	// * ---------------- I/2. A do-while (hátultesztelő) ciklus ------------------- *

	//A while ciklus hátultesztelős változatához
	//a do kulcsszót használhatjuk.
	//
	//Mivel ciklus hátultesztelős, így a ciklusmag
	//egyszer lefut, és csak azután ellenőrzi a
	//program, hogy fusson-e le még egyszer.

	// HINTS: Visual Studioban, ha leírod a do kulcsszót,
	// és nyomsz ezt követően nyomsz egy TAB billentyűt,
	// az alap szintaxist le fogja generálni

	do
	{
		printf("Ez a do-while ciklusmagja\n");
	} while (counter < 1); // Fontos a while után vessző!

	// * ---------------- I/3. A for (elöltesztelő) ciklus ------------------- *

	//Szintén	elöltesztelős a for kulcsszóval
	//létrehozható ciklus.
	
	//Ennek tulajdonsága, hogy jellemzően
	//ciklusváltozót használó ciklusoknál alkalmazzuk.
	
	//A szintaktika nem csak a bentmaradási
	//feltételt tartalmazza, hanem az	inicializálást 
	//és a ciklusváltozó módosítását is.

	// HINTS: Visual Studioban, ha leírod a for kulcsszót,
	// és nyomsz ezt követően nyomsz egy TAB billentyűt,
	// az alap szintaxist le fogja generálni

	int number;
	
	// A for ciklus paraméterei
	// int i = 0 -> inicializálás
	// i < 3 -> bentmaradási feltétel
	// i++ -> változók módosítása
	
	// Kérjünk be háromszor egy egész számot
	// majd írassuk is ki a számokat
	for (int i = 0; i < 3; i++)
	{
		printf("Adja meg a(z) %d. szamot: ", i+1);
		scanf("%d", &number);
		printf("A bekert szam a(z): %d\n", number);
	}

	// * ----------- I/4. A for és while ciklus megfeleltetése --------------- *

	for (int i = 0; // kezdeti érték
		i < 5; // feltétel  
		i++) // értékváltoztatás
	{
		printf("%d\n", i); // ciklusmag
	}
	
	int i = 0; // kezdeti érték
	while (i < 5) // feltétel 
	{
		printf("%d\n", i); // ciklusmag
		i++; // értékváltoztatás
	}

	// * ------------------------- I/5. Egyszerűsítés ------------------------- *

	//A blokk itt is elhagyható, ha csak egy utasítás van

	// int i, j;
	// for (i = 0; i < 10; i++)
	//	 for (j = 0; j < 10; j++)
	//		 if (i < j)
	//			 printf("%d * %d = %d\n", i, j, i * j);

	// * ------------------ II. Véletlen számok generálása -------------------- *

	// Véletlen számok generálására akkor lehet
	// szükség, ha a programba véletlenszerű
	// működést szeretnénk elérni
	
	// Valódi véletlen számot nehéz generálni,
	// ezért helyette ál véletlen értékeket
	// generálunk
	
	// Valami szabály szerint alkotjuk őket, de
	// ránézésre véletlennek tűnnek

	// A véletlenszám generátort az elején
	// inicializálni kell az srand függvény
	// segítségével

	// #include <stdlib.h>
	// #include <time.h>
	//srand();

	//Ha fix értéket kap, akkor a generált értékek 
	//minden futtatásnál ugyanazok lesznek
	srand(4312);

	//Ha tényleg véletlen eredményt akarunk,
	//akkor mindig más értékkel kell meghívni,
	//pl.az aktuális idővel
	srand(time(NULL));

	//Véletlen értéket a rand függvény generál,
	//ami valami egész szám lesz (0 és RAND_MAX között)
	
	//Tipikusan a maradékszámítással korlátozzuk
	//Pl. véletlen érték a 0-99 tartományon
	int ertek;
	ertek = rand() % 100;
	printf("%d\n", ertek);

	//Pl. véletlen érték az 50 149 tartományon
	int ertek2;
	ertek2 = rand() % 100 + 50;
	printf("%d\n", ertek2);

	//Pl.véletlen lebegőpontos érték a 0-1 tartományon
	double ertek3;
	ertek3 = (double)rand() / RAND_MAX;
	printf("%lf\n", ertek3);

	return 0;
}