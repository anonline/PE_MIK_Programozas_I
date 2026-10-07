#include <stdio.h>

int main()
{
    int adattomb[10];
    int i;
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &adattomb[i]);
    }
    int eztkeressuk;
    scanf("%d", &eztkeressuk);
    int itt_van;

    itt_van = -1;
    for (i = 0; i < 10; i++){
        if(adattomb[i] == eztkeressuk){
            itt_van = i;
            break;
        }
    }

    if (itt_van == -1)
        printf("Nincs benne\n");
    else
        printf("Benne van, ezen az indexen: %d\n", itt_van);
    return 0;
}