#include <stdio.h>

int main()
{
    int ertek, alap;
    scanf("%d %d", &ertek, &alap);
    int maradek;
    do
    {
        maradek = ertek % alap;
        if(maradek < alap/2){
            ertek--;
        }
        else if(maradek >= alap/2){
            ertek++;
        }
    } while (ertek % alap != 0);
    
    printf("%d\n", ertek);
    return 0;
}
