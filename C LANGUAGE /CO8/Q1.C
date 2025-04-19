#include <stdio.h>

int main()
{
    int num = 10;
    int *ptr = &num;

    printf("Value of number: %d\n", num);

    printf("Address of number: %p\n", &num);

    printf("Value stored at the address pointed : %d\n", *ptr);

    *ptr = 20;

    printf("Modified value of number: %d\n", num);

    return 0;
}
