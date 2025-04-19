#include <stdio.h>

int main()
{
    int a;

    printf("ENTER A NUMBER\n");
    scanf("%d", &a);

    if (a < 0)
    {
        printf("%d is a negative integer\n", a);
    }
    else if (a == 0)
    {
        printf("The number is zero\n");
    }
    else
    {
        printf("%d is a positive integer\n", a);
    }

    return 0;
}
