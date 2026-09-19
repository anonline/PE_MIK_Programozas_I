#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	// * --------------------------------- I. Tömb --------------------------------- *
	
	// A tömb több azonos típusú változót képes tárolni egymás mellé téve.
	// A tömbnek csak a változók típusát és számát kell megadni.
	// Akkor jó, ha több, ugyanolyan célt szolgáló értéket szeretnénk eltárolni.
	// Pl.: 10 darab hosszúságérték tárolását kellene megoldani.
	
	// Lehetne 10 külön változó, de ha később kiderül, hogy inkább 20 kell, 
	// akkor gondban vagyunk.

	// * -------------------------- I/2. Tömb létrehozása -------------------------- *
	
	// típus, név, tömben lévő elemek száma
	int numbers[10];

	// * -------------------------- I/2. Tömb indexelése --------------------------- *
	
	// A tömb elemeit külön el lehet érni, mintha különböző változók lennének.
	// A változók egymás mellett helyezkednek el sorrendben.
	// Minden elemnek van egy indexe a tömbön belül(hányadik a sorban).
	
	// Az első elem indexe mindig 0.
	// Az utolsó elem indexe n elem esetén n - 1.

	// * -------------------------- I/3. Elemek elérése- --------------------------- *

	// Adott egy tömb
	int tomb[10];
	
	//Az első(0 - s indexű) elem elérése
	tomb[0] = 42;
	scanf("%d", &tomb[0]);
	printf("%d\n", tomb[0]);
	int a = tomb[0];
	
	// Egy tetszőleges(pl. 4 - es indexű) elem elérése
	tomb[4] = 11;

	// * -------------------------- I/4. Tömb indexelése --------------------------- *

	// Egy n elemű tömb esetén az indexek 0 - tól n-1-ig mennek.
	// A program nem veszi észre, ha érvénytelen a megadott index,
	// de a program futása helytelen lesz tőle.
	
	int nameDays[10];
	nameDays[0] = 1;
	nameDays[4] = 3;
	nameDays[9] = 2;
	nameDays[10] = 2; // Nincs ilyen elem
	nameDays[-1] = 1; // Nincs ilyen elem

	// * -------------------------- I/5. Elemek elérése 1. --------------------------- *

	// Az eléréshez megadott index egy másik változó, vagy akár egy kifejezés is lehet
	
	int days[10];
	int i = 5;
	days[i] = 3;
	days[i + 1] = 5;
	days[2 * i - 1] = 5;

	// * -------------------------- I/5. Elemek elérése 2. --------------------------- *
		
	// Változók segítségével végig tudjuk járni a tömb elemeit
	
	int years[10];
	
	for (int i = 0; i < 10; i++)
		years[i] = i * i * i;

	// * ------------------------ II. Karakter (String) tömb ------------------------- *
	
	//A szöveg reprezentálása egy karakter tömbsegítségével valósítható meg
	//A karaktersorozat végét egy ‘\0’ speciálisb karakter jelzi
	//A karaktertömb mérete a karaktersorozat hosszánál legalább egyel nagyobb kell, 
	//hogy legyen
	
	char text[10] = {'a','l','m','a','f','a','\0'};
	scanf("%s", text); //ide nem kell & jel (mert a text egy pointer)
	printf("%s", text); //6 karaktert jelenít meg
	
	return 0;
}