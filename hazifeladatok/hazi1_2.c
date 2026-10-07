#include <stdio.h>

int main()
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);

    int osszeg = a + b + c + d;
    if (osszeg % 2 == 0)
    {
        int fel = osszeg / 2;
        if (fel == a || fel == b || fel == c || fel == d)
        {
            printf("IGEN\n");
            return 0;
        }

        if ((a + b) == fel || (a + c) == fel || (a + d) == fel || (b + c) == fel || (b + d) == fel || (c + d) == fel)
        {
            printf("IGEN\n");
            return 0;
        }
    }

    printf("NEM\n");
    return 0;
}
