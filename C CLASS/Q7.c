#include <stdio.h>

int main()
{
    float a1, a2, a3;

    printf("Enter the first angle: ");
    scanf("%f", &a1);

    printf("Enter the second angle: ");
    scanf("%f", &a2);

    printf("Enter the third angle: ");
    scanf("%f", &a3);

    if (a1 + a2 + a3 == 180)
    {
        printf("The triangle can be made.\n");
    }
    else
    {
        printf("The triangle cannot be made.\n");
    }

    return 0;
}
