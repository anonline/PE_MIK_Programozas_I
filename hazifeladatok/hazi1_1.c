#include <stdio.h>

int main()
{
    int jatekosX, jatekosY;
	int celX, celY;
	scanf("%d %d", &jatekosX, &jatekosY);
	scanf("%d %d", &celX, &celY);

    while(jatekosY != celY){
        if(jatekosY > celY){
            jatekosY--;
            printf("le\n");
        }
        else
        {
            jatekosY++;
            printf("fel\n");
        }
    }

    while(jatekosX != celX){
        if(jatekosX > celX){
            jatekosX--;
            printf("balra\n");
        }
        else
        {
            jatekosX++;
            printf("jobbra\n");
        }
        
    }

    return 0;
}
