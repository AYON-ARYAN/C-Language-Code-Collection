#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

int main() {
    struct node* head = NULL; // Initialize head as NULL




    printf("Enter the index where you want to add the node: ");
    int index, data;
    scanf("%d", &index);

    printf("Enter the data of the node: ");
    scanf("%d", &data);

    // Handle insertion at the beginning (index 0)
    if (index == 0) {
        struct node* new_node = (struct node*)malloc(sizeof(struct node));
        new_node->data = data;
        new_node->next = head;
        head = new_node;
       
    }

    struct node* current = head;
    int i = 0;

    // Traverse to the node before the insertion index
    while (current != NULL && i < index - 1) {
        current = current->next;
        i++;
    }

    // Check if the index is valid (avoid out-of-bounds)
    if (current == NULL) {
        printf("Invalid index\n");
 
    }

    // Create and insert the new node
    struct node* new_node = (struct node*)malloc(sizeof(struct node));
    new_node->data = data;
    new_node->next = current->next;
    current->next = new_node;

    return 0;
}
