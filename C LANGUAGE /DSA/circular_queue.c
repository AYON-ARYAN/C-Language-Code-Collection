#include <stdio.h>
#define size 100
int a, b, c, top = -1,dtop=-1,n;
int arr[size];
void push()
{
    printf("Enter the number you want to push in the queue: ");
    scanf("%d", &a);
    top++;
    dtop++;
    if (top == n)
    {
        top = 0;
        arr[top] = a;
    }
    else if (top < n)
    {
        arr[top] = a;
    }
}
void pop()
{
    printf("The popped element is : %d", arr[0]);

    for (int i = 0; i < top; i++)
    {
        arr[i] = arr[i + 1];
    }
    top--;
    dtop--;
}
void display()
{
    for (int j = 0; j < dtop; j++)
    {
        printf("%d\n", arr[j]);
    }
}

int main()
{
    printf("What do want the size os circular queue to be? ");
    scanf("%d",&n);
    int p = 0;
    while (p == 0)
    {
        
        printf("Enter the operation you want to do:\nPress 1 for push\n 2 for pop\n 3 for display\n 4 for exit\n");
        scanf("%d", &b);
        switch (b)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            p++;
            break;
        default:
            printf("Choose the right number");
            break;
        }
    }
    return 0;
}