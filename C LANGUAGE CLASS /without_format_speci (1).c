#include<stdio.h>

int main()
{
    char str[20] = "Readers!!"; // Array holding a string
    char *ptr = "Dear"; // Character pointer pointing to a string

    printf("Hello\n"); // Printing a string literal constant
    printf("%s\n", ptr); // Printing a string pointed to by a character pointer
    printf("%s\n", str); // Printing contents of a character array

    return 0;
}
