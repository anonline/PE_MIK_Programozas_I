// * --------------------------------- I. Kulcsszavak használata --------------------------------- *

// A #define kulcsszó egy úgy nevezett makró.
// Ennek segítségével tudunk olyan ál-változókat beállítani,
// amelyek értéke az egész program során állandó.

// Ez egy olyan parancs, ami nem a program futása közben hajtódik végre, 
// hanem még fordításkor.

//Ha a feladat azt mondja, hogy csináljunk egy 10 elemű tömböt, 
//akkor beírhatjuk a fájl elejére a következőt
#define N 10

// És később létrehozhatjuk a tömböt
// int tomb[N];

// És használhatjuk
// for (i = 0; i < N; i++) { … }

#define _CRT_SECURE_NO_WARNINGS
#define length 6
#include <stdio.h>

int main() {
	// Kiindulási állapot
	
	// Létrehozunk egy length hosszúságú tömböt
	// int array[length];
	// printf("Adja meg a tomb ertekeit:\n");

	// Feltöltjük a tömböt értékekkel	
	// for (int i = 0; i < length; i++)
	//	 scanf("%d", &array[i]);

	// Egy hat elemű tömb előre meghatározott értékekkel
	int array[length] = { 2, 3, 4, 1, 5, 6 };

	// * -------------------------------- II. A csere programozás tétel ------------------------------ *

	// FELADAT
	// Olvasson be két számot a billentyűzetről és tárolja el két változóba
	// Cserélje meg a két változó értékét

	int numberA, numberB;
	scanf("%d" "%d", &numberA, &numberB);
	// Ahhoz, hogy A változó értéke ne tűnjön el, elmentjük egy másik változóba
	int numberC = numberA;
	// Az A változó felveszi B értékét
	numberA = numberB;
	// A B változónak az eredeti a értéket kell átadni, 
	// amit elmentettünk korábban a C változóba
	numberB = numberC;

	// * ------------------------------ III. Összegzés programozás tétel ----------------------------- *
	
	// FELADAT
	// Számoljuk össze egy tömb elemeit

	int sum = 0;
	// Menjünk végig a tömb elemein
	for (int i = 0; i < length; i++)
		// Az aktuális indexű elem értéket adjuk hozzá a sum változóhoz
		sum += array[i];
	// Írassuk ki a sum változó értékét
	printf("A tomb elemeinek osszege: %d\n", sum);

	// * ---------------------------- III. A megszámlálás programozás tétel --------------------------- *

	// FELADAT
	// Hozzon létre egy hatelemű tömböt
	// Töltse fel a tömböt billentyűzetről beolvasott értékekkel
	// Olvasson be egy számot, majd számolja össze, 
	// hogy az adott szám hányszor szerepel a tömbben
	// Írja ki az eredményt

	// ELV
	// Kell egy új változó, ami az eredményt tárolja
	// Végig kell menni a tömbön, minden elemre
	// Ha az adott elem teljesíti a feltételt, akkor a számlálót növeljük

	// Bekérjük a keresett számot
	int number;
	printf("Adja meg a keresetett szamot: ");
	scanf("%d", &number);

	// Létrehozunk egy változót a számláláshoz
	int counter = 0;

	// Végigmegyünk a tömb elemein és megnézzük,
	// az adott elem egyenlő-e a számmal
	// Ha igen, akkor növeljük a counter változó értékét
	for (int i = 0; i < length; i++)
		if (array[i] == number)
			counter++;

	// Kiíratjuk a találatok számát
	printf("%d db talalat.\n", counter);

	// * ------------------------------ V. Eldöntés programozás tétel -------------------------------- *
	
	// FELADAT
	// Döntsük el, van-e a tömbben 100-nál nagyobb érték

	// Egy változó tömb bejárásához
	int i = 0;
	// Addig fusson a while ciklus, amíg tart a tömb 
	// és a szám kisebb vagy egyenlő, mint 100
	while (i < length && array[i] <= 100)
		// Számláló értékének növelése
		i++;
	// Ha i változó értéke kisebb, mint a tömb mérete akkor van ilyen érték
	if (i < length)
		printf("Van 100-nal nagyobb ertek a tombben.\n");
	else
		printf("Nincs 100-nal nagyobb ertek a tombben.\n");

	// * ------------------------------ VI. A keresés programozás tétel ------------------------------- *

	// FELADAT
	// Hozzon létre egy tízelemű tömböt és töltse fel értékekkel
	// Olvasson be egy számot és tárolja el
	// Írassa ki, hogy a tömb elemei közt szerepel - e a beolvasott szám
	// Amennyiben szerepel, írja ki az első előfordulásának helyét(indexét)

	// ELV
	// Ha megtaláltuk, nem kell tovább keresni
	// Ezért while ciklust használhatunk
	// A tömb minden elemére
	// Ha az adott elem a keresett, leállhatunk
	// A leállást a while feltételében vizsgáljuk

	int number2 = 5;
	int index = 0;

	// A keresés a WHILE ciklussal indul
	// Hogy ne menjünk ki a tömbből, ezért index < lenght
	// De akkor is álljunk le, ha az aktuális elem megfelelő
	// Emlékezzünk a logikai és-re:
	// Ha az első kifejezés hamis, nem értékeli ki a másodikat
	while (index < length && array[index] != number2)
		index++;

	// vagy FOR ciklussal
	// Tömb elemei közötti keresés az első előfordulásig
	for (int i = 0; i < length; i++) {
		if (array[i] == number2) {
			index = i;
			// Kilépünk a ciklusból, ha megtaláltuk az első előfordulást
			break;
		}
	}

	// Ha megtaláltuk, akkor index értéke a keresett index
	// Ha nem, akkor végigértünk a tömbön, vagyis index == lenght

	if (index < length)
		printf("Megtalaltuk a(z) %d. indexen.\n", index);
	else
		printf("Nincs szam a ilyen a tombben.\n");

	// * ------------------------------ VII. Kiválasztás programozás tétel --------------------------- *
	
	// FELADAT
	// Keressük meg az első 100-nál nagyobb elemet, és írjuk ki
	
	// Egy változó tömb bejárásához
	//int i = 0;
    i = 0;
	// Addig fusson a while ciklus, amíg tart a tömb 
	// és a szám kisebb vagy egyenlő, mint 100
	while (i < length && array[i] <= 100)
		// Számláló értékének növelése
		i++;
	// Ha i változó értéke kisebb, mint a tömb mérete akkor van ilyen érték
	if (i < length)
		// Kiíratjuk a szám indexét és magát a számot
		printf("Elso 100-nal nagyobb ertek: %d (index: %d)\n", array[i], i);
	else
		printf("Nincs 100-nal nagyobb ertek.\n");

	// * ------------------------------ VIII. Minimumkeresés ------------------------------- *

	// FELADAT
	// Keressük meg a legkisebb érték helyét és értékét
	// Amennyiben a legkisebb érték többször is szerepel a tömbben, 
	// az első előfordulásának a helyét írassa ki

	// ELV
	// Kezdetben higgyük azt, hogy az első érték (0. index) a legkisebb
	// Végigjárjuk a tömb elemeit
	// Ha az adott elem kisebb, mint amiről eddig azt hittük
	// Akkor változik az elképzelésünk, és új jelölt van

	// Az első tipp a 0-s indexen lévő elem a legkisebb
	int minIndex = 0;

	// A 0. indexet már nem kell vizsgálni,
	// de a többit igen
	for (int i = 1; i < length; i++)
	{
		// Ha az elem kisebb, mint az eddigi tipp
		if (array[i] < array[minIndex])
			// Akkor ez az új tipp
			minIndex = i;
	}
	printf("Legkisebb elem helye: %d, erteke:% d\n", minIndex, array[minIndex]);

	// * ------------------------------ IX. Maximumkeresés ------------------------------- *

	// FELADAT
	// Keressük meg a legnagyobb érték helyét és értékét
	// Amennyiben a legnagyobb érték többször is szerepel a tömbben, 
	// az első előfordulásának a helyét írassa ki

	// Az első tipp a 0-s indexen lévő elem a legnagyobb
	int maxIndex = 0;

	// A 0. indexet már nem kell vizsgálni,
	// de a többit igen
	for (int i = 1; i < length; i++)
	{
		// Ha az elem nagyobb, mint az eddigi tipp
		if (array[i] > array[maxIndex])
			// Akkor ez az új tipp
			maxIndex = i;
	}
	printf("Legnagyobb elem helye: %d, erteke: %d\n", maxIndex, array[maxIndex]);
	return 0;

	// * ------------------------------ X. Feltételes szélsőérték keresés ----------------------------- *

    // FELADAT
    // Keressük meg a legkisebb páros számot a tömbben
    // Ha nincs páros szám, írjuk ki, hogy nincs

    // ELV
    // Minimumkereséshez hasonló, de csak a feltételt teljesítő 
    // elemeket vizsgáljuk (itt: páros számok)
    // Kezdetben nincs jelölt (-1)
    // Végigmegyünk a tömbön:
    //  - ha páros számot találunk és még nincs jelölt, az lesz a kezdő jelölt,
    //  - ha már van jelölt és találunk kisebb párost, frissítjük a jelöltet.
    // A végén, ha maradt jelölt, az a legkisebb páros szám, 
    // ha nincs, akkor nem volt páros szám.

	// Kezdetben nincs jelölt (-1) és ezt be is állítjuk
	int min_idx = -1;
	// Végigmegyünka tömb elemein
	for (int j = 0; j < length; j++) {
		// Ha az elem páros
		if (array[j] % 2 == 0) {
			// Ha nincs még jelölt, vagy az új elem kisebb
			if (min_idx == -1 || array[j] < array[min_idx])
				// Új legkisebb páros jelölt
				min_idx = j;
		}
	}

	// Ha találtunk páros számot
	if (min_idx != -1)
		printf("Legkisebb paros szam: %d (index: %d)\n", array[min_idx], min_idx);
	// Ha a min_idx értéke -1 marad, akkor nincs páros szám a tömben
	else
		printf("Nincs paros szam a tombben.\n");

	// * ------------------------------ XI. Kiválogatás programozás tétel ----------------------------- *

	// FELADAT
	// Válogassuk ki a 100-nál nagyobb értékeket egy új tömbbe
	// Írjuk ki a talált értékeket a képernyőre

	// ELV
	// Egy új tömbre lesz szükségünk, amelybe azokat az elemeket gyűjtjük,
	// amelyek teljesítik a feltételt (itt: nagyobb mint 5).
	// Létrehozunk egy számlálót (count), amely mutatja, hány elemet vettünk át.
	// Végigjárjuk a tömböt, és minden feltételnek megfelelő elemet 
	// bemásolunk az új tömbbe.
	
	// Egy tömb a kiválogatott értékeknek
	int selectedArray[length];
	// Egy változó az áttett elemek számolására
	int count = 0;

	// Végigmegyünk a tömbön
	for (int j = 0; j < length; j++)
		// Ha az aktuális elem nagyobb, mint az öt
		if (array[j] > 5) {
			// Hozzáadjuk az új tömbhöz az új elemet
			selectedArray[count] = array[j];
			// Növeljük a count változó értékét
			count++;
		}
	// Végigmegyünk a tömbon és kiíratjuk az elemeit
	printf("Otnel nagyobb ertekek:");
	for (int j = 0; j < count; j++)
		printf(" %d", selectedArray[j]);
	printf("\n");

	// * ------------------------------ XII. Rendezés programozás tétel ------------------------------- *

	// FELADAT
	// Rendezzük a tömb elemeit növekvő sorrendbe.
	// Használjuk a "kiválasztásos rendezés" (selection sort) módszert.

	// ELV
	// Kezdetben a teljes tömb rendezetlen.
	// Minden lépésben megkeressük a hátralévő (még rendezetlen) 
	// rész legkisebb elemét, és kicseréljük a jelenlegi pozícióban álló elemmel.
	// A ciklus végére az elején lévő rész már mindig rendezett lesz,
	// és egyre kisebb rendezetlen rész marad hátra.
	// Ezt ismételjük, amíg az egész tömb növekvő sorrendű lesz.

	// A külső ciklus: végigmegyünk minden pozíción a tömbben, 
	// kivéve az utolsót (az már automatikusan jó lesz)
	for (int currentIndex = 0; currentIndex < length - 1; currentIndex++) {
		// Kezdő jelölt: aktuális pozíció az eddigi legkisebb,
		// tehát az első körben a 0. indexű, második körben az 1. indexű, stb.
		int minIndex = currentIndex;
		// Belső ciklus: keresés a tömb hátralévő részében,
		// vagyis kezdetben 1. indexű elemtől kezdődően
		// a tömb utolsó eleméig keresünk
		for (int searchIndex = currentIndex + 1; searchIndex < length; searchIndex++)
			// Ha találunk kisebb elemet
			if (array[searchIndex] < array[minIndex])
				// Frissítjük a legkisebb indexét
				minIndex = searchIndex;
		
		// Ha találtunk kisebb elemet, mint a currentIndex helyen lévő
		// |[3]|[4][5][6][2][1] <= legkisebb elem
		// Ebben az esetben a 3-at kicseréljük az 1-el
		// |[1]|[4][5][6][2][3]
		
		// Ha szám jó helyen van akkor feleslegesen ne cseréljünk
		if (minIndex != currentIndex) {
			// Csere: a currentIndex helyre kerül a legkisebb
			int tmp = array[currentIndex];
			array[currentIndex] = array[minIndex];
			array[minIndex] = tmp;
		}
	}

	// Kiíratjuk a rendezett tömböt
	printf("Rendezett tomb:");
	for (int j = 0; j < length; j++)
		printf(" %d", array[j]);
	printf("\n");

	return 0;
}