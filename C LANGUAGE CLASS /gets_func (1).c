#include<stdio.h>

int main()
{
    char plang[50];

    printf("Enter name of a programming language:\n");
    fgets(plang, sizeof(plang), stdin);

    printf("First programming language is %s", plang);

    printf("\nEnter name of the 2nd programming language:\n");
    fgets(plang, sizeof(plang), stdin);

    printf("Second programming language is %s", plang);

    return 0;
}


// Your code uses the gets function, which is not recommended due to its vulnerability to buffer overflow. Instead, you should use fgets to read input and ensure that you specify the size of the buffer to avoid potential issues.