#include <stdio.h>

int main()
{
    char name[21]; // 20 characters for the name + 1 for the null terminator

    printf("Enter your name\t");
    scanf("%0.2 [abcd]", name);

    printf("Your name is %s", name);

    return 0;
}
// [^abcd] will read characters until it encounters any character not in the specified set ('a', 'b', 'c', 'd'). If you want to restrict the input to only those characters, you should use %[abcd] instead.
// The %[^abcd] format specifier will not null-terminate the string properly. You need to ensure that the name array has enough space for the input string and the null terminator.