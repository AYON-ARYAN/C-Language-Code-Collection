#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

int main()
{
    struct node *head;
    head = (struct node *)malloc(sizeof(struct node));
    head->data = 10;
    head->next = NULL;
    struct node *temp = head;   
    
    // Insertion
    int a, b, c;
    printf("Enter the index at which you want to insert the node: ");
    scanf("%d", &a);

    if (a == 0)
    {
        struct node *newNode;
        newNode = (struct node *)malloc(sizeof(struct node));
        printf("Enter the data: ");
        scanf("%d", &newNode->data);
        newNode->next = head;
        head = newNode;
    }
    else
    {
        c = 0;
        while (c != a - 1)
        {
            c++;
            temp = temp->next;
        }
        printf("Enter the data: ");
        scanf("%d", &b);
        struct node *newNode;
        newNode = (struct node *)malloc(sizeof(struct node));
        newNode->data = b;
        newNode->next = temp->next;
        temp->next = newNode;
    }

    // Display before deletion
    temp = head;
    printf("Linked List before deletion:\n");
    while (temp != NULL)
    {
        printf("%d\n", temp->data);
        temp = temp->next;
    }

    // Deletion
    int f, v = 0;
    temp = head;
    printf("Enter the index at which you want to delete: ");
    scanf("%d", &f);

    while (v < f - 1 && temp != NULL)
    {
        temp = temp->next;
        v++;
    }
    if (temp == NULL || temp->next == NULL)
    {
        printf("Index out of range.\n");
        return 1;
    }
    struct node *toBeDeleted = temp->next;
    temp->next = temp->next->next;
    free(toBeDeleted);

    // Display after deletion
    temp = head;
    printf("Linked List after deletion:\n");
    while (temp != NULL)
    {
        printf("%d\n", temp->data);
        temp = temp->next;
    }

    return 0;
}
