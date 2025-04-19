#include <stdio.h>

int main()
{
    char a[23];
    float p;
    int f;
    char fi;

    printf("What is the name of your favorite fruit:\n");
    scanf(" %22s", a);
// for controlling buffer overflow but i dont understand why to put buffer over flow
    printf("What is the price of the fruit in rupees and paise:\n");
    scanf("%f", &p);

    printf("How many fruits would you like to buy:\n");
    scanf("%d", &f);

    printf("What is the first letter of your favorite fruit:\n");
    scanf(" %c", &fi);

    printf("\nYou entered the following details:\n");
    printf("NAME=%s\n", a);
    printf("PRICE=%f\n", p);
    printf("QUANTITY=%d\n", f);
    printf("FIRST LETTER=%c\n", fi);
    return 0;
}
