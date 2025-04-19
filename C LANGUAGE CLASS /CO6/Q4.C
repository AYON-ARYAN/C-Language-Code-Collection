#include <stdio.h>
#include <string.h>

int main()
{

    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    int length = 0;
    while (str[length] != '\0')
    {
        length++;
    }
    printf("Length of the string (without strlen()): %d\n", length);

    int length_with_strlen = strlen(str);
    printf("Length of the string (with strlen()): %d\n", length_with_strlen);

    return 0;
}

