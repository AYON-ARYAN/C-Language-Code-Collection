#include <stdio.h>

int main()
{
    int a;
    int i = 0;
    int c;

    printf("Enter the number=\n");
    scanf("%d",&a);

    while (i < 10)
    {
        i++;
        c = a * i;
        printf("The table =>%d * %d = %d\n", a, i, c);
    }

    return 0;
}
