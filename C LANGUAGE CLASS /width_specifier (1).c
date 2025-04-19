#include<stdio.h>

int main()
{
    char name[20];  // 3 characters for the name + 1 for the null terminator

    printf("Enter your name\t");
    scanf("%3s", name);

    printf("Your name is %s", name);

    return 0;
}
// If you want to read a full line of input, consider using fgets instead of scanf.