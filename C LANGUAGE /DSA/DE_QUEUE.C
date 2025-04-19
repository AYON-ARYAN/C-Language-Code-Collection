#include <stdio.h>
#define size 100

int arr[size];
int top = -1, b, a, c, d, e;

void push() {
    printf("Where do you want to push?\nPress 1 for front\nPress 2 for back\n");
    scanf("%d", &a);
    printf("Enter the element you want to add: ");
    scanf("%d", &b);
    
    if (a == 1) {
        printf("Element inserted in the front\n");
        for (int i = top; i >= 0; i--) {
            arr[i + 1] = arr[i];
        }
        top++;
        arr[0] = b;
    }
    if (a == 2) {
        printf("Element inserted at the end\n");
        top++;
        arr[top] = b;
    }
}

void pop() {
    printf("Enter the side you want to pop the element from:\nPress 1 for front\nPress 2 for end\n");
    scanf("%d", &c);
    
    if (top == -1) {
        printf("Deque is empty\n");
        return;
    }

    if (c == 1) {
        printf("Element will be removed from front:\n");
        printf("The popped number is %d\n", arr[0]);
        for (int i = 0; i < top; i++) {
            arr[i] = arr[i + 1];
        }
        top--;
    } else {
        printf("The element will be removed from the back\n");
        printf("The popped number is %d\n", arr[top]);
        top--;
    }
}

void display() {
    printf("All elements are:\n");
    for (int k = 0; k <= top; k++) {
        printf("Element at index %d is: %d\n", k, arr[k]);
    }
}

int main() {
    d = 0;
    printf("Welcome to deque\n");

    while (d == 0) {
        printf("Enter the operation number you want\nPress 1 for push\nPress 2 for pop\nPress 3 for display\nPress 4 for exit\n");
        scanf("%d", &e);

        switch (e) {
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
                printf("Exiting...\n");
                d = 1;
                break;
            default:
                printf("Invalid choice\n");
        }
    }

    return 0;
}
