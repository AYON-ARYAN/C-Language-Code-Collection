#include <stdio.h>

int main()
{
    char name[20]; // Adjust the size according to your needs

    printf("Enter your name:\t");
    scanf("%s", name);
    printf("Your name is %s\n", name);

    printf("Enter your name again:\t");
    scanf("%s", name);
    printf("Your name is %s\n", name);

    return 0;
}

// The size of the name array is set to 5, which includes space for four characters and the null terminator. If you try to input a name longer than 4 characters, it will result in a buffer overflow.
// In the second scanf call, you don't need to use the address-of operator (&) when passing the array name because the array name itself acts as a pointer to the first element.