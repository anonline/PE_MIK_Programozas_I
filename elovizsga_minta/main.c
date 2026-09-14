#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int nap;      // 1-31
    char napszak; // 'r', 'e', 'v'
    int ar;       // Forintban
} Etkezes;

typedef struct
{
    int nap;
    int reggeli;
    int ebed;
    int vacsora;
} NapiKoltseg;

Etkezes *beolvas(int max_db, int *tenyleges_db)
{
    Etkezes *tomb = (Etkezes *)malloc(max_db * sizeof(Etkezes));

    int db = 0;

    while (db < max_db)
    {
        int nap;
        printf("\nNap azonositoja (1-31, vagy 0 a kilepeshez): ");
        scanf("%d", &nap);

        if (nap == 0)
        {
            break;
        }

        char napszak;
        printf("Napszak (r/e/v): ");
        scanf(" %c", &napszak);

        int ar;
        printf("Ar: ");
        scanf("%d", &ar);

        int mar_letezik_index = -1;
        for (int i = 0; i < db; i++)
        {
            if (tomb[i].nap == nap && tomb[i].napszak == napszak)
            {
                mar_letezik_index = i;
                break;
            }
        }

        if (mar_letezik_index != -1)
        {
            tomb[mar_letezik_index].ar = ar;
        }
        else
        {
            tomb[db].nap = nap;
            tomb[db].napszak = napszak;
            tomb[db].ar = ar;
            db++;
        }
    }

    *tenyleges_db = db;
    return tomb;
}

void kiir(Etkezes *tomb, int db)
{
    for (int i = 0; i < db; i++)
    {
        printf("%d. nap, %c napszak: %d Ft\n", tomb[i].nap, tomb[i].napszak, tomb[i].ar);
    }
}

int osszegez(Etkezes *tomb, int db)
{
    int osszeg = 0;
    for (int i = 0; i < db; i++)
    {
        osszeg += tomb[i].ar;
    }
    return osszeg;
}

NapiKoltseg kigyujtNap(Etkezes *tomb, int db, int keresett_nap)
{
    NapiKoltseg nk = {.nap = keresett_nap, .reggeli = 0, .ebed = 0, .vacsora = 0};

    for (int i = 0; i < db; i++)
    {
        if (tomb[i].nap == keresett_nap)
        {
            if (tomb[i].napszak == 'r')
            {
                nk.reggeli = tomb[i].ar;
            }
            else if (tomb[i].napszak == 'e')
            {
                nk.ebed = tomb[i].ar;
            }
            else if (tomb[i].napszak == 'v')
            {
                nk.vacsora = tomb[i].ar;
            }
        }
    }
    return nk;
}

int legdragabbNap(Etkezes *tomb, int db)
{
    int max_koltseg = -1;
    int max_nap = -1;

    for (int nap = 1; nap <= 31; nap++)
    {
        NapiKoltseg nk = kigyujtNap(tomb, db, nap);
        int napi_osszeg = nk.reggeli + nk.ebed + nk.vacsora;

        if (napi_osszeg > max_koltseg)
        {
            max_koltseg = napi_osszeg;
            max_nap = nap;
        }
    }
    return max_nap;
}

int main()
{
    int max_db;
    printf("Legfeljebb mennyi etkezes adatat szeretne tarolni? ");
    scanf("%d", &max_db);

    int tenyleges_db = 0;

    Etkezes *etkezesek = beolvas(max_db, &tenyleges_db);

    kiir(etkezesek, tenyleges_db);

    int teljes_koltseg = osszegez(etkezesek, tenyleges_db);
    printf("\nAz osszes ettermi koltseg: %d Ft\n", teljes_koltseg);

    while (1)
    {
        int lekerdez_nap;
        printf("Melyik nap adataira vagy kivancsi? (1-31, 0 = kilepes): ");
        scanf("%d", &lekerdez_nap);

        if (lekerdez_nap == 0)
        {
            break;
        }

        NapiKoltseg nk = kigyujtNap(etkezesek, tenyleges_db, lekerdez_nap);
        int napi_osszeg = nk.reggeli + nk.ebed + nk.vacsora;

        printf("A(z) %d. nap koltsegei:\n", nk.nap);
        printf(" - Reggeli: %d Ft\n", nk.reggeli);
        printf(" - Ebed:    %d Ft\n", nk.ebed);
        printf(" - Vacsora: %d Ft\n", nk.vacsora);
        printf(" -> Napi osszesen: %d Ft\n", napi_osszeg);
    }

    if (tenyleges_db > 0)
    {
        int legdragabb_azonosito = legdragabbNap(etkezesek, tenyleges_db);
        NapiKoltseg max_nk = kigyujtNap(etkezesek, tenyleges_db, legdragabb_azonosito);
        int max_osszeg = max_nk.reggeli + max_nk.ebed + max_nk.vacsora;

        printf("A legdragabb nap a(z) %d. nap volt (%d Ft).\n", legdragabb_azonosito, max_osszeg);
        printf("Reszletek: Reggeli: %d Ft, Ebed: %d Ft, Vacsora: %d Ft\n", max_nk.reggeli, max_nk.ebed, max_nk.vacsora);
    }

    free(etkezesek);

    return 0;
}