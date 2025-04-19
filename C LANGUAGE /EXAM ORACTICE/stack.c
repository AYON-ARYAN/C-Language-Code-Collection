#include<stdio.h>
#include<stdbool.h>

#define MAX_SIZE 100

int top = -1;
int arr[MAX_SIZE];

void push(){
    top++;
    printf("Enter the element you want to push: ");
    scanf("%d", &arr[top]);
}

void pop(){
    printf("The element was popped %d\n",arr[top]);
    top--;
}

bool is_empty(){
    return (top == -1);
}

bool is_full(){
    return (top == MAX_SIZE - 1);
}

void peek(){
    if (is_empty()) {
        printf("Stack is empty\n");
    } else {
        printf("Top element: %d\n", arr[top]);
    }
}void display(){
    for (int i = 0; i < top; i++)
    {
        printf("The stack is %d",arr[i]);
    }
    
}

int main(){
    int a;
    int v=1;
    printf("Enter the operation you want to do:\n");
    while (v==1)
    {
        
    
    printf("Press 1 for push\nPress 2 for pop\nPress 3 for is empty\nPress 4 for is full\nPress 5 for peek\nPress 6 for exit\n Press 7 for display  ");
    scanf("%d", &a);

    switch (a) {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            printf("Stack is %s\n", is_empty() ? "empty" : "not empty");
            break;
        case 4:
            printf("Stack is %s\n", is_full() ? "full" : "not full");
            break;
        case 5:
            peek();
            break;
            case 6:
            printf("Exiting...\n");
            v--;
            break;
            case 7:
            display();
            break;
        default:
            printf("Invalid choice\n");
            break;
    }
    }
    return 0;
}
