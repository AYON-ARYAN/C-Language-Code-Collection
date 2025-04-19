// #include <stdio.h>
// #include <stdlib.h>

// struct node
// {
//     int data;
//     struct node *next;
// };

// int main()
// {
//     struct node *head = NULL; // Initialize head as NULL

//     printf("Enter the index where you want to add the node: ");
//     int index, data;
//     scanf("%d", &index);

//     printf("Enter the data of the node: ");
//     scanf("%d", &data);

//     // Handle insertion at the beginning (index 0)
//     if (index == 0)
//     {
//         struct node *new_node = (struct node *)malloc(sizeof(struct node));
//         new_node->data = data;
//         new_node->next = head;
//         head = new_node;
//     }
//     else
//     {
//         struct node *current = head;
//         int i = 0;

//         // Traverse to the node before the insertion index
//         while (current != NULL && i < index - 1)
//         {
//             current = current->next;
//             i++;
//         }

//         // Check if the index is valid (avoid out-of-bounds)
//         if (current == NULL)
//         {
//             printf("Invalid index\n");
//         }

//         // Create and insert the new node
//         struct node *new_node = (struct node *)malloc(sizeof(struct node));
//         new_node->data = data;
//         new_node->next = current->next;
//         current->next = new_node;
//     }

//     // You should free the allocated memory before returning
//     // This prevents memory leaks
//     struct node *temp;
//     while (head != NULL)
//     {
//         temp = head;
//         head = head->next;
//         free(temp);
//     }

//     return 0;
// }
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
int main()
{
    struct node *head;
    struct node *temp = head;
    int a, b, c, d;
    struct node *head = (struct node *)malloc(sizeof(struct node));
    struct node *head1 = (struct node *)malloc(sizeof(struct node));
    struct node *head2 = (struct node *)malloc(sizeof(struct node));
    struct node *temp = head;
    head->next = head1;
    head->data = 0;
    head1->data = 1;
    head->prev = NULL;

    head1->next = head2;
    head2->data = 2;
    head2->next = NULL;
    printf("Enter the number at which the element needs to be inserted: ");
    scanf("%d", &a);
    if (a == 0)
    {
        struct node *newNode;
        newNode = (struct node *)malloc(sizeof(struct node));
        newNode->data = 11;
        newNode->next = head;
        newNode->prev = NULL;
        head->prev = newNode;
        head = newNode; // Set the new node as the head
    }
    else
    {
        temp = head;
        int i = 0;
        while (temp != NULL && i < a - 1) // Iterate until reaching the node before the desired position
        {
            temp = temp->next;
            i++;
        }
        if (temp != NULL)
        {
            struct node *newNode = (struct node *)malloc(sizeof(struct node));
            newNode->data = 100;
            newNode->next = temp->next;
            newNode->prev = temp;
            if (temp->next != NULL)
            {
                temp->next->prev = newNode;
            }
            temp->next = newNode;
        }
        else
        {
            printf("Invalid position!\n");
        }
    }

    // for travel
    while (temp != NULL)
    {

        printf("Element: %d\n", temp->data);
    }
    // delete
    c = -1;
    printf("Enter the element you want to delete: ");
    scanf("%d", &b);
    if (b = 0)
    {
        head = head->next;
        head->prev = NULL;
        free(temp);
    }
    else
    {
        while (temp->next != NULL && c == b)
        {
            c++; // position
            if (temp->next = NULL)
            {
                temp->prev->next = NULL;
                free(temp);
            }
            else
            {
                temp->prev = temp->next;
                temp->next->prev = temp->prev;
                free(temp);
            }
        }
    }
    // for travel
    while (temp != NULL)
    {
        temp->next = temp;
        printf("Element: %d\n", temp->data);
    }
    return 0;
}
