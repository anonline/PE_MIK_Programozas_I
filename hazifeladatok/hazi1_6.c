#include <stdio.h>

int main(){
    int ora,perc;
    do
    {
        scanf("%d %d", &ora, &perc);
    } while (ora < 0 || ora > 23 || perc < 0 || perc > 59);
    printf("%d %d\n", ora, perc);
    return 0;
}