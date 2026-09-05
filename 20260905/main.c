#include <stdio.h>

int main() {
    //Első példa
    printf("Hello, World!\n");

    //Második példa
    for (int idxI = 0; idxI < 10; idxI++) {
        printf("idxI = %d\n", idxI);
    }

    //Harmadik példa
    float result;

    printf("result=");
    scanf("%f", &result);

    if(result > 50) {
        printf("Passed\n");
    } else {
        printf("Failed\n");
    }
    
    return 0;
}