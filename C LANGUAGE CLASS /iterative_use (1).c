#include<stdio.h>

int main()
{
    char ch, line[50];
    int loc = 0;

    printf("Enter a line of text:\n");

    while ((ch = getchar()) != '\r' && ch != '\n')  // Adjust for different line endings
        line[loc++] = ch;

    line[loc] = '\0';

    printf("\nThe text you entered is:\n%s", line);

    return 0;
}
// use getchar instead of getche