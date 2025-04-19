#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{

    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    for (int i = 0; i < strlen(str); i++)
    {
        str[i] = tolower(str[i]);
    }

    printf("String in lower case: %s\n", str);

    for (int i = 0; i < strlen(str); i++)
    {
        str[i] = toupper(str[i]);
    }

    printf("String in upper case: %s\n", str);

    return 0;
}
