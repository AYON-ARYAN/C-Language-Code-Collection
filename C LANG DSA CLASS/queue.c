#include <stdio.h>
int running = 1;
int top = -1, b, m;
int arr[100];

void push()
{
    top++;
    arr[top] = b;
}

void pop()
{
    b = arr[top];
    top--;
}

int isEmpty()
{
    return (top == -1);
}

int isFull()
{
    return (top == 99);
}

void size()
{
    printf("%d\n", top + 1);
}

void peek()
{
    printf("%d\n", arr[top]);
}

int main()
{
    while (running == 1 && m != 7)
    {

        printf("What do you want to do?\nPress 1 for Push\nPress 2 for Pop\nPress 3 for is Empty\nPress 4 for is Full\nPress 5 for is Size\nPress 6 for is Peek\nPress 7 for Exit\n:");
        scanf("%d", &m);

        switch (m)
        {
        case 1:
            push();
            printf("Enter the element you want to push");
            scanf("%d", &b);
            break;
        case 2:
            pop();
            break;
        case 3:
            isEmpty() ? printf("Yes\n") : printf("No\n");
            break;
        case 4:
            isFull() ? printf("Yes\n") : printf("No\n");
            break;
        case 5:
            size();
            break;
        case 6:
            peek();
            break;
        case 7:
            running == 0;
            printf("Exiting...\n");
            break;
        default:
            printf("Invalid choice\n");
            break;
        }
    }
    return 0;
}
