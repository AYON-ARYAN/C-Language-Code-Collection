#include<stdio.h>

int main()
{
    char str[20] = "Readers!!"; // Array holding a string
    char *ptr = "Dear"; // Character pointer pointing to a string

    printf("%s%s%s", "Hello", ptr, str);

    return 0;
}
// Used standard double quotes (") for string literals.
// Changed the main function to int main() to follow the standard C convention.