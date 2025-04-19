#include <stdio.h>
#include <stdbool.h>

#define MAX_SIZE 100

// Define the stack structure
typedef struct {
    int arr[MAX_SIZE];
    int top;
} Stack;

// Function to initialize the stack
void init(Stack *stack) {
    stack->top = -1;
}

// Function to push an element onto the stack
void push(Stack *stack, int element) {
    if (stack->top < MAX_SIZE - 1) {
        stack->arr[++(stack->top)] = element;
    } else {
        printf("Stack Overflow\n");
    }
}

// Function to pop an element from the stack
int pop(Stack *stack) {
    if (stack->top >= 0) {
        return stack->arr[(stack->top)--];
    } else {
        printf("Stack Underflow\n");
        return -1; // Or handle underflow differently based on your application
    }
}

// Function to check if the stack is empty
bool isEmpty(Stack *stack) {
    return (stack->top == -1);
}

int main() {
    Stack stack;
    init(&stack); // Initialize the stack

    // Push elements onto the stack
    push(&stack, 1);
    push(&stack, 2);
    push(&stack, 3);

    // Example usage of stack operations
    printf("Popping elements: ");
    while (!isEmpty(&stack)) {
        printf("%d ", pop(&stack));
    }
    printf("\n");

    return 0;
}
