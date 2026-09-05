#include <stdio.h>
#define myArraySize 7

int main()
{
    int myArray[myArraySize] = {45, 67, 12, 96, -23, 8, 12};
    const int limit = 30;

    for (int i = 0; i < myArraySize; i++)
    {
        printf("myArray[%d] = %d\n", i, myArray[i]);
    }

    // sum those numbers which are greater than 30 (limit)
    int sum = 0;
    for (int i = 0; i < myArraySize; i++)
    {
        if (myArray[i] > limit)
        {
            sum += myArray[i];
        }
    }
    
    printf("Sum of number which are greater than %d = %d\n", limit, sum);

    return 0;
}