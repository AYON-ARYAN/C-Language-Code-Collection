#include<stdio.h>

int main()
{
    char name[20];

    printf("Enter your name\t");
    scanf("%s", name);

    printf("Your name is %s", name);

    return 0;
}
//If you want to read a full line including spaces, you should use fgets instead of scanf.