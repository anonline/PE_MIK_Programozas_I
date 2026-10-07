#include <stdio.h>

#define MERET 15

int main()
{
    int tomb[MERET];
    int i;
    for (i = 0; i < MERET; i++)
        scanf("%d", &tomb[i]);
    int bal, jobb;
    scanf("%d%d", &bal, &jobb);

    int count = 0;

    for (i = 0; i < MERET; i++)
    {
        if(bal < tomb[i] && tomb[i] < jobb){
            count++;
        }
    }
    
    printf("%d\n", count);
    return 0;
}