#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main() {
	// * ------------------------ I. Elágazás -------------------------- *
	
	// Az elágazás egy olyan blokk, 
	// melynek tartalma csak akkor hajtódik végre, 
	// ha egy megadott feltétel teljesül
	// Pl.: Ha a szám páros, osszuk le kettővel.

	// * ------------------ II. Logikai kifejezések -------------------- *
	
	// Az elágazások feltétele egy logikai 
	// kifejezés, amely vagy igaz, vagy hamis.
	
	// * ------------ II/1. Egyszerű logikai kifejezések --------------- *
	
	// igaz, ha a és b értéke megegyezik, egyébként hamis
	// a == b 
	// igaz, ha a és b értéke különbözik, egyébként hamis
	// a != b 
	// igaz, ha a értéke kisebb, mint bértéke, egyébként hamis
	// a < b 
	// igaz, ha a értéke nagyobb, mint bértéke, egyébként hamis
	// a > b 
	// igaz, ha a értéke kisebb, vagy egyenlő, mint b értéke, egyébként hamis
	// a <= b 
	// igaz, ha a értéke nagyobb, vagy egyenlő, mint b értéke, egyébként hamis
	// a >= b 

	// * ------------ II/2. Összetett logikai kifejezések --------------- *

	// Amelyek más logikai kifejezésekből jönnek tagadással, 
	// és - , vagy - , illetve kizáró vagy műveletekkel.
	// Pl.: A szám nagyobb, mint 2, és kisebb mint 6.

	// k1 és k2: igaz, ha mind k1 és k2 is igaz
	// (k1) && (k2)
	// k1 vagy k2: igaz, ha a kettő közül legalább az egyik igaz 
	// (k1) || (k2)
	// k1 xor k2 (kizáró vagy): igaz ha pontosan az egyik igaz
	// (k1) ^ (k2)
	// nem k1: igaz, ha k1 hamis 
	// !(k1)

	// Többszörösen összetett kifejezések:
	// Pl. (a > b && b != 3) || !(c > 2 || c < 3)

	// * -------------------- II/3. Oszthatóság ----------------------- *

	// Maradékos osztás: % operátor
	// Visszaadja a 3-mal való osztási maradékát(Pl.: 5 % 3 = 2)
	// a % 3 
	// A maradék 0, ha osztható vele
	// Pl. : Az a szám osztható 5 - tel:
	// (a % 5) == 0
	// Pl. : Az a szám nem osztható 7 - tel:
	// (a % 7) != 0

	// * -------------- III. Elágazás létrehozása 1. ------------------ *
	
	// C - ben elágazást az if kulcsszóval hozhatunk létre
	// A feltétel a kulcsszó után zárójelben jön
	// Majd a végrehajtandó utasítások blokkja
	// Pl.: Ha az a szám osztható 2-vel, adjunk hozzá 5-öt :
	
	int a = 4;
	if (a % 2 == 0)
	{
		a += 5;
	}
	printf("%d\n", a);

	// * -------------- III. Elágazás létrehozása 2. ------------------ *

	// Ha …, egyébként …
	// Sok esetben előfordul, hogy nem csak 
	// akkor kell műveleteket végezni, ha a
	// feltétel igaz, hanem akkor is, ha hamis,
	// viszont ezek a műveletek eltérhetnek.
	
	// Pl.: Ha a szám osztható 2 - vel, akkor adjunk
	// hozzá 5-öt, egyébként vonjunk ki 4-et.

	// if {…} else {…}
	// A feltétel hamis ágát az else kulcsszóval 
	// tudjuk definiálni, ami után szintén egy
	// blokk következik:

	a = 5;
	if (a % 2 == 0)
	{
		a += 5;
	}
	else
	{
		a -= 4;
	}
	printf("%d\n", a);

	// * -------------- III. Elágazás létrehozása 3. ------------------ *
	
	// Egyszerűsítések 1.
	// Amennyiben a feltétel bármely ágában
	// lévő blokk csak egy utasításból áll, magát
	// a blokkot nem kell külön jelölni:

	// if (a % 2 == 0)
	//	a += 5;
	// else
	//	a -= 4;

	// Egyszerűsítések 2.
	// Ha a logikai kifejezés az a == 0 vagy a != 0
	// feltételt használja, nem kell az
	// összehasonlítást kiírni.Ha egy számot
	// logikai kifejezésként értelmezünk,
	// amennyiben a szám értéke 0, akkor a
	// jelentése hamis, egyébként pedig igaz.
	
	// ugyanaz, mint: if (a!=0)
	// if (a)
	// ugyanaz, mint: if (a==0) 
	// if (!a) 
	// ugyanaz, mint: if (a % 2 == 0)
	// if (!(a % 2)) 

	// * -------------- III. Elágazás létrehozása 4. ------------------ *

	// Egyébként ha
	// Egy feltételnek akár kettőnél több ága is
	// lehet az else if használatával:

	// if (a < 2) { … }
	// else if (a < 4) { … }
	// else if (a < 10) { … }
	// else { … }

	// * -------------- IV. Matematikai függvények ------------------ *
	
	// Matematikai függvények használatához
	// #include <math.h>
	
	// Gyökvonás - sqrt()
	double szam = 16.0; 
	double gyok = sqrt(szam);
	printf("A %.2lf negyzetgyoke: %.2lf\n", szam, gyok);

	// Abszolútérték - fabs()
	double szam2 = -7.25;
	double abszolut_ertek = fabs(szam2);

	printf("A %.2lf abszoluterteke: %.2lf\n", szam2, abszolut_ertek);
	
	return 0;
}