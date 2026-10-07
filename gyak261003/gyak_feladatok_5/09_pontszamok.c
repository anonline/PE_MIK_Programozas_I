/*
 * 9. Pontszámok
 * Készíts egy programot C nyelven, amelyik:
 * - Bekér 15 egész számot egy tömbbe úgy, hogy ezek pontszámokat jelölnek, és csak 0 és 100 közötti
 *   értékek lehetnek (0 és 100 is),
 * - A felhasználó írhat be rossz értéket, ezt nem szabad elfogadni,
 * - A végén kiírja a pontszámok átlagát,
 * - Majd kiírja azt is, hogy mennyi 90 feletti pontszám van.
 */

 #include <stdio.h>

 int main()
 {
     int pontszamok[15];
     int osszeg = 0;
     int harminc_feletti = 0;

     int i = 0;
     do
     {
        int pontszam;
        printf("Add meg a %d. pontszamot (0-100): ", i + 1);
        scanf("%d", &pontszam);
        if (pontszam >= 0 && pontszam <= 100) {
            pontszamok[i] = pontszam;
            osszeg += pontszam;
            if (pontszam > 90) {
                harminc_feletti++;
            }
            i++;
        } else
        {
            printf("Hibas pontszam! Add meg ujra (0-100)!\n");
        }
        
     } while (i < 15);
    
     float atlag = (float)osszeg / 15;
     printf("A pontszamok atlaga: %.2f\n", atlag);
     printf("90 feletti pontszamok szama: %d\n", harminc_feletti);
     return 0;
 }
     