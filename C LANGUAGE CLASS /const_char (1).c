#include <stdio.h>

int main()
{
    printf("The first character of string literal \"xyz\" is %c\n", *("xyz"));
    printf("The second character of string literal \"xyz\" is %c", *("xyz" + 1));

    return 0;
}
//  You should use standard double quotes (") and escape sequences (\")