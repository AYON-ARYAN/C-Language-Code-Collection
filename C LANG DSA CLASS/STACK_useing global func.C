#include <stdio.h>

#define MAX_SIZE 100

int stack[MAX_SIZE];
int top = -1; // An integer variable initialized to -1, acting as a pointer to the top element of the stack. Initially, the stack is empty

void init() // Resets the top pointer to -1, effectively initializing the stack as empty.
{
    top = -1;
}

int is_full() // Checks if the stack is full. It returns 1 (true) if top is at least MAX_SIZE - 1, indicating that the next push would exceed the capacity. Otherwise, it returns 0 (false).
{
    return top >= MAX_SIZE - 1;
}

int is_empty() // Checks if the stack is empty. It returns 1 (true) if top is -1, meaning no elements are present. Otherwise, it returns 0 (false).

{
    return top == -1;
}

void push(int item) // Attempts to push a new element item onto the stack.
// If the stack is full (is_full() returns true), it prints an error message ("Stack Overflow") and returns without making any changes.
// Otherwise, it increments top to point to the next available position in the stack array and stores item there.
{
    if (is_full())
    {
        printf("Stack Overflow\n");
        return;
    }
    stack[++top] = item;
}

int pop() // Attempts to remove (pop) the top element from the stack.
// If the stack is empty (is_empty() returns true), it prints an error message ("Stack Underflow") and returns -1.
// Otherwise, it retrieves the element at stack[top], decrements top to point to the new top element, and returns the popped element.
{
    if (is_empty())
    {
        printf("Stack Underflow\n");
        return -1;//it is like an error code
    }
    return stack[top--];
}

int peek() // Returns the top element of the stack without removing it.
// If the stack is empty (is_empty() returns true), it prints an error message ("Stack is empty") and returns -1.
// Otherwise, it returns the element at stack[top].
{
    if (is_empty())
    {
        printf("Stack is empty\n");
        return -1;
    }
    return stack[top];
}

int main()
{
    init(); // Initialize the stack

    push(10); // Pushes 10 onto the stack.
    push(45); // Pushes 45 onto the stack.
    push(11); // Pushes 11 onto the stack.
    push(30); // Pushes 30 onto the stack.

    printf("is_full() returns: %d\n", is_full()); // Checks if the stack is full and prints the result (0, since it's not full yet).
    printf("peek() returns: %d\n", peek());       // Peeks at the top element (30) and prints it.

    pop(); // Pops two elements, removing 30 and 11 from the stack.
    pop(); // Now, the stack contains {45, 10}.

    printf("peek() returns: %d\n", peek()); // Peeks at the top element (45) and prints it.

    return 0;
}
