#include <stdio.h>

int main()
{
    int a, c;
    char b;

    printf("Enter the number of element you want in the array as well as the string array: ");
    scanf("%d", &a);
    int arr[a];
    char str[a];
    for (int i = 0; i < a; i++)
    {
        printf("Enter the Element %d:", i + 1);
        scanf("%d", &arr[i]);

        printf("Enter the string you want in the array %d:"i + 1);
        scanf("%c", &str[i]);
    }

    
    for (int j = 0; j < a; j++)
    {
        printf("The element in the array is : %d", arr[j]);
        printf("The string array %c:", str[j]);
    }

    return 0;
}