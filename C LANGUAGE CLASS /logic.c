
#include <stdio.h>
#include <math.h>
int main()
{
    // int a=5;
    // int b=6;
    int a, b;
    printf("What is the value of a \n");
    scanf("%d", &a);

    printf("What is the value of b\n");
    scanf("%d", &b);
    // int c=a&&b;

    // printf("THE ANSWER IS %d", c);

    if (a <= b)
    {

        printf("A is smaller than b");
    }
    else
    {
        printf("A is greater than b");
    }
    return 0;
}