#include <stdio.h>

int szamok[50];
int szamokDarab;
int valogatott[50];
int valogatottDarab;

void valogat()
{
    valogatottDarab = 0;
    for (int i = 0; i < szamokDarab; i++)
    {
        if(szamok[i] > 100){
            valogatott[valogatottDarab] = szamok[i];
            valogatottDarab++;
        }
    }
    
}

int main()
{
    scanf("%d", &szamokDarab);
    int i;
    for (i = 0; i < szamokDarab; i++)
        scanf("%d", &szamok[i]);

    valogat();

    for (i = 0; i < valogatottDarab; i++)
        printf("%d ", valogatott[i]);
    printf("\n");

    return 0;
}