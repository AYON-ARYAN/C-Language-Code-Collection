#include <stdio.h>

int main()
{
    int f;
    printf("What is the value of f=");
    scanf("%d",&f);

    for (; f > 0; f--)
    {
        printf("The value of f is %d\n", f);
    }

    return 0;
}