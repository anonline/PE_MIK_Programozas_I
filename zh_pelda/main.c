#include <stdio.h>
#include <stdlib.h>

// #define PART2
// #define PART3
// #define PART4
// #define PART5
// #define PART6

struct ceg {
    char telephely[31];
    unsigned int dolgozok;
    double ertekeles;
    unsigned int epuletek;
};

// 1. feladat ->

typedef struct ceg ceg;

ceg* kellmemoria(int cegekSzama) {
    return malloc(cegekSzama * sizeof(ceg));
}

void torol(ceg* tomb) { free(tomb); }

void cegEgyetBeker(ceg* ceg) {
    scanf("%s %u %lf %u", ceg->telephely, &ceg->dolgozok, &ceg->ertekeles, &ceg->epuletek);
}

void kiirtomb(ceg* ceg, int cegekSzama) {
    for (int i = 0; i < cegekSzama; i++) {
        printf("%s %u %.2lf %u\n", ceg[i].telephely, ceg[i].dolgozok, ceg[i].ertekeles, ceg[i].epuletek);
    }
}

// <- 1. feladat

// 2. feladat ->

int feladat2(ceg* cegek, int cegekSzama) {
    int szamlalo = 0;
    for (int i = 0; i < cegekSzama; i++) {
        if (cegek[i].dolgozok < 714) {
            szamlalo++;
        }
    }
    return szamlalo;
}

// <- 2. feladat

// 3. feladat ->

void feladat3(char* fajlNev) {
    FILE* f = fopen(fajlNev, "r");
    ceg beolvasottCegek[4];

    for (int i = 0; i < 4; i++) {
        fscanf(f, "%s %u %lf %u", beolvasottCegek[i].telephely, &beolvasottCegek[i].dolgozok, &beolvasottCegek[i].ertekeles, &beolvasottCegek[i].epuletek);
    }

    kiirtomb(beolvasottCegek, 4);
    printf("%d\n", feladat2(beolvasottCegek, 4));
    
    fclose(f);
}

// <- 3. feladat

// 4. feladat ->

void fajlba(ceg* cegek, int cegekSzama, char* fajlNev) {
    FILE* f = fopen(fajlNev, "w");
    for (int i = 0; i < cegekSzama; i++) {
        fprintf(f, "%u\n", cegek[i].dolgozok);
    }
    fclose(f);
}

// <- 4. feladat

// 5. feladat ->

struct cseretarolo {
    ceg* ceg1;
    ceg* ceg2;
};

void kigyujtes(ceg* cegek, int index1, int index2, struct cseretarolo* cserelendok) {
    cserelendok->ceg1 = &cegek[index1];
    cserelendok->ceg2 = &cegek[index2];
}

void modosito(struct cseretarolo* cserelendok) {
    unsigned int temp = (*(cserelendok->ceg1)).epuletek;

    (*(cserelendok->ceg1)).epuletek = (*(cserelendok->ceg2)).epuletek;
    (*(cserelendok->ceg2)).epuletek = temp;
}

// <- 5. feladat

// 6. feladat ->

struct ceg* nagytombcsinalo(struct ceg* cegek1, int cegekSzama1, struct ceg* cegek2, int cegekSzama2) {
    struct ceg* mindenCeg = kellmemoria(cegekSzama1 + cegekSzama2);

    for (int i = 0; i < cegekSzama1; i++) {
        mindenCeg[i] = cegek1[i];
    }

    for (int i = 0; i < cegekSzama2; i++) {
        mindenCeg[cegekSzama1 + i] = cegek2[i];
    }

    return mindenCeg;
}

// <- 6. feladat

int main() {
    printf("\n--START OF PART1--\n");
    unsigned int meret;
    scanf("%u", &meret);
    struct ceg* tomb;
    tomb = kellmemoria(meret);
    {
        unsigned int i;
        for (i = 0; i < meret; i++) cegEgyetBeker(&tomb[i]);
    }
    kiirtomb(tomb, meret);

    printf("\n--END OF PART1--\n");

#ifdef PART2
    printf("\n--START OF PART2--\n");
    unsigned int szamlalas = feladat2(tomb, meret);
    printf("%u\n", szamlalas);
    printf("\n--END OF PART2--\n");
#endif

    char fajlnev3[50];
    scanf("%s", fajlnev3);
#ifdef PART3
    printf("\n--START OF PART3--\n");
    feladat3(fajlnev3);
    printf("\n--END OF PART3--\n");
#endif

    char fajlnev4[50];
    scanf("%s", fajlnev4);
#ifdef PART4
    printf("\n--START OF PART4--\n");
    fajlba(tomb, meret, fajlnev4);
    printf("Fajl tartalma:\n");
    FILE* fp = fopen(fajlnev4, "r");
    char buffer[255];
    if (fp) {
        while (fgets(buffer, 255, fp)) {
            printf("%s", buffer);
        }
        fclose(fp);
    }
    printf("\n--END OF PART4--\n");
#endif

    int index1, index2;
    scanf("%d %d", &index1, &index2);
#ifdef PART5
    printf("\n--START OF PART5--\n");
    // Lemásoljuk, hogy ne az eredetit babráljuk
    struct ceg* masolat = kellmemoria(meret);
    unsigned int i;
    for (i = 0; i < meret; i++) masolat[i] = tomb[i];
    struct cseretarolo gyujtemeny;
    kigyujtes(masolat, index1, index2, &gyujtemeny);
    modosito(&gyujtemeny);
    printf("Modositas utan:\n");
    kiirtomb(masolat, meret);
    torol(masolat);
    printf("\n--END OF PART5--\n");
#endif

    unsigned int masikmeret;
    scanf("%u", &masikmeret);
#ifdef PART6
    printf("\n--START OF PART6--\n");
    {
        // Lemásoljuk, hogy ne az eredetit babráljuk
        struct ceg* egyiktomb = kellmemoria(meret);
        unsigned int i;
        for (i = 0; i < meret; i++) egyiktomb[i] = tomb[i];
        struct ceg* masiktomb = kellmemoria(masikmeret);
        for (i = 0; i < masikmeret; i++) cegEgyetBeker(&masiktomb[i]);
        struct ceg* nagytomb =
            nagytombcsinalo(egyiktomb, meret, masiktomb, masikmeret);
        kiirtomb(nagytomb, meret + masikmeret);
        torol(egyiktomb);
        torol(masiktomb);
        torol(nagytomb);
    }
    printf("\n--END OF PART6--\n");
#endif

    printf("\n--START OF PART1--\n");
    torol(tomb);
    printf("\n--END OF PART1--\n");

    return 0;
}