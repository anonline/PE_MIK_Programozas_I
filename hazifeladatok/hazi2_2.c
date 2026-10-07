#include <stdio.h>

int main()
{
    int array[28];
    int i;
    for (i = 0; i < 28; i++)
        scanf("%d", &array[i]);

    int osszeg = 0;
    for (i = 0; i < 28; i++)
    {
        if (array[i] % 2 == 0)
        {
            osszeg += array[i];
        }
    }

    printf("%d\n", osszeg);

    return 0;
}