#include <stdio.h>
#include <stdlib.h>

// Structure for linked list node
struct node
{
    int data;
    struct node *next;
};

// Display function to print elements of the linked list
void travel(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("ELEMENT: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

int main()
{
    int a, b, c, d; // Input values for the list nodes

    // Declare pointers for the nodes of the linked list
    struct node *head;
    struct node *head2;
    struct node *head3;
    struct node *head4;

    // Input values for the list nodes
    printf("Enter values for the four nodes: ");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);

    // Allocate memory for the list nodes
    head = (struct node *)malloc(sizeof(struct node));
    head2 = (struct node *)malloc(sizeof(struct node));
    head3 = (struct node *)malloc(sizeof(struct node));
    head4 = (struct node *)malloc(sizeof(struct node));

    // Link the first and second nodes
    head->data = a;
    head->next = head2;

    // Link the second and third nodes
    head2->data = b;
    head2->next = head3;

    // Link the third and fourth nodes
    head3->data = c;
    head3->next = head4;

    // Link the fourth node to NULL to terminate the list
    head4->data = d;
    head4->next = NULL;

    // Print the elements of the linked list
    travel(head);

    // Search for a node
    int lo;
    printf("Enter the element you wish to search for: ");
    scanf("%d", &lo);
    int position = 0;
    struct node *temp = head;
    while (temp != NULL && temp->data != lo)
    {
        temp = temp->next;
        position++;
    }
    if (temp != NULL)
    {
        printf("Element found at position %d\n", position + 1);
    }
    else
    {
        printf("Element not found\n");
    }

    // Delete a node
    int o;
    printf("Enter the number of the node you want to delete: ");
    scanf("%d", &o);

    if (o == 1)
    {
        // Delete the first node
        struct node *ptr = head;
        head = head->next;
        free(ptr);
        printf("Node deleted successfully\n");
    }
    else if (o == 4)
    {
        // Delete the last node
        head3->next = NULL; // making head 3 poiunt to null
        free(head4);        // freeed head 4
        printf("Node deleted successfully\n");
    }
    else
    {
        // Delete a node other than the first or last node
        struct node *p = head;
        struct node *q = head->next;
        for (int i = 0; i < o - 1; i++)
        {
            p = p->next;
            q = q->next;
        }
        p->next = q->next;
        free(q);
        printf("Node deleted successfully \n");
        // Print the elements of the linked list after deletion
        travel(head);
        return 0;
    }
}