#include <stdio.h>

int main(){
    int szamok[20];

    for (int i = 0; i < 20; i++)
    {
        scanf("%d", &szamok[i]);
    }

    int c = 0;

    for (int i = 0; i < 20; i++)
    {
        if(szamok[i] % 2 == 0){
            printf("%d. egesz szam: %d\n", ++c, szamok[i]);
        }
    }
    
    return 0;
}