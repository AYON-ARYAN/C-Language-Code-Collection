#include <stdio.h>
int a = 0;
int arr[500];
void input();

void display();
int main()
{
    input();
    display();
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
        printf("The element is %d : ", arr[j]);
    }
}