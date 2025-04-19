#include <stdio.h>

#define MAX 100

int arr[MAX];
int top = -1;

void push()
{
    top++;
    printf("Enter the number you want to push: ");
    scanf("%d", &arr[top]);
}

void pop()
{
    int t = 0;
    printf("The popped number is %d\n", arr[0]);
    while (t == 0)
    {
        t++;
        for (int i = 0; i < top; i++)
        {
            arr[i] = arr[i + 1];
        }
    }
    top--;
}

void front()
{
    printf("The front number is : %d\n", arr[0]);
}

void is_empty()
{
    if (top == -1)
    {
        printf("Stack is empty\n");
    }
    else
    {
        printf("Stack is not empty\n");
    }
}

void is_full()
{
    if (top == MAX - 1)
    {
        printf("Stack is full\n");
    }
    else
    {
        printf("Stack is not full\n");
    }
}

void display()
{
    for (int i = top; i >= 0; i--)
    {
        printf("Queue: %d\n", arr[i]);
    }
}

int main()
{

    int c = 1;
    int choice;
    while (c = 1)
    {
        printf("Enter the operation you want to perform: \nPress 1 for push\nPress 2 for pop\nPress 3 for front\nPress 4 for empty\nPress 5 for full\nPress 6 for display the queue\nPress 7 for exit\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;

        case 3:
            front();
            break;
        case 4:
            is_empty();
            break;
        case 5:
            is_full();
            break;
        case 6:
            display();
            break;
        case 7:
            printf("Exiting...\n");
            c == 0;
            break;
        default:
            printf("Invalid input\n");
        }
    }
}
