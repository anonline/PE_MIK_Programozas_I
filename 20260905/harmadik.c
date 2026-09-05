#include <stdio.h>

int main() {
    double radius;
    const double pi = 3.14;

    double area, circumference;

    printf("Calc the area and circ of a disc.\n");
    printf("r = ");
    scanf("%lf", &radius);

    area = radius * radius * pi;
    circumference = 2 * radius * pi;

    printf("Disc's circumference = %lf\n", circumference);
    printf("Disc's area = %lf\n", area);

    return 0;
}