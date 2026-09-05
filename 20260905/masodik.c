#include <stdio.h>

int main() {
    float age = 50000;

    //printf("Starting age = ");
    //scanf("%g", &age);   
    printf("age = %.3g\n", age);
    age += 5.2;
    printf("age = %.3f\n", age);

    return 0;
}
