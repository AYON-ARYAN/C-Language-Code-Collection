#include <stdio.h>

int main()
{
    char a[20];
    printf("Enter a sentence: ");
    scanf("%s", a);

    if (a[0] != '\0')
    {
        printf("The first letter is: %c\n", a[0]);
    }
    else
    {
        printf("The string is empty.\n");
    }

    return 0;
}
