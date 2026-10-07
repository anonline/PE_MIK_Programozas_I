/*
15 Betűkód generálás
A betűkódokkal való számolás során a 0 érték megfelelője az üres szöveg, majd az 1, 2, 3, … értékeknek az A, B, C, …
karakterek felelnek meg. Az 26-nak megfelelő érték a Z karakter, viszont mivel utána elfogynak az ABC betűi, a
számolás a két karakteres kódokhoz fordul, így a 27 megfelelője az AA lesz, majd a 28, 29, 30, … az AB, AC, AD, …
Hasonlóan a 702 lesz a ZZ, ami után a 3 karakteres kódok jönnek, így a 703-ból AAA lesz, a 704-ből AAB, stb.
Hasonlóan megyünk tovább 4, 5, … karakterre is, ha szükséges.
Ezek alapján készíts egy programot C nyelven, amelyik:
• Bekér egy egész számot,
• A számot betűkóddá alakítja, amit elment egy szövegben, és azt megjeleníti.
• Példák:
o Bemenet: 25, Kimenet: Y
o Bemenet: 32, Kimenet: AF
o Bemenet: 76, Kimenet: BX
o Bemenet: 650, Kimenet: XZ
o Bemenet: 705, Kimenet: AAC
o Bemenet: 6802, Kimenet: JAP
o Bemenet: 19405, Kimenet: ABRI
o Bemenet: 254631, Kimenet: NLQM
o Bemenet: 4486215, Kimenet: IUFJS
*/

#include <stdio.h>
#define MAX 50

int main()
{
    int szam;
    char szoveg[MAX];
    int szovegHossz = 0;
    
    printf("Add meg a szamot: ");
    scanf("%d", &szam);

    while(szam > 0)
    {
        int maradek = szam % 26;
        szam /= 26;
        if(maradek == 0)
        {
            maradek = 26;
            szam--;
        }
        szoveg[szovegHossz] = 'A' + maradek - 1;
        szovegHossz++;
    }
    szoveg[szovegHossz] = '\0';

    for(int i = 0; i < szovegHossz / 2; i++)
    {
        char temp = szoveg[i];
        szoveg[i] = szoveg[szovegHossz - 1 - i];
        szoveg[szovegHossz - 1 - i] = temp;
    }

    printf("%s\n", szoveg);
    
    return 0;
}