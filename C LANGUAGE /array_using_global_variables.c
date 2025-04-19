#include <stdio.h>
int a = 0;
int arr[500];
void input();
void addition();
void display();
int main()
{
    input();
    display();
    addition();
    return 0;
}
void input()
{
    printf("Enter the size of array: ");
    scanf("%d", &a);

    for (int i = 0; i < a; i++)
    {
        printf("Enter element %d : ", i + 1);
        scanf("%d", &arr[i]);
    }
}
void display()
{

    for (int j = 0; j < a; j++)
    {
        printf("The element is %d : \n", arr[j]);
    }
}
void addition()
{
    int sum = 0;
    for (int k = 0; k < a; k++)
    {
        sum += arr[k];
    }
    printf("\nSum of all elements in the array is :%d\n", sum);
}