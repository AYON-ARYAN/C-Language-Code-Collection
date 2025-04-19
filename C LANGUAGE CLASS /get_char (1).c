#include<stdio.h>

int main()
{
    char ch, line[50];
    int loc = 0;

    printf("Enter a line of text:\n");

    while ((ch = getchar()) != '\n')
        line[loc++] = ch;

    line[loc] = '\0';

    printf("The text you entered is:\n%s", line);

    return 0;
}
//  getchar() to read characters from the standard input until a newline character ('\n') is encountered. It then stores these characters in the line array and terminates the array with a null character ('\0'). Finally, it prints the entered text.