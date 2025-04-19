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

    int total = 2;
    printf("Hello guys\n");
    struct node *head = (struct node *)malloc(sizeof(struct node));
    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    printf("Enter the data of the pre made node 1: ");
    scanf("%d", &head->data);
    printf("Enter the data of the pre made node 2: ");
    scanf("%d", &new_node->data);
    head->next = new_node;
    new_node->prev = head;
    new_node->next = head;
    head->prev = new_node;
    struct node *temp = head;
    struct node *temp1 = head;
    struct node *last = new_node;
    int exit = 0;
    while (exit == 0)
    {

        printf("Enter the operation you want\nPress 1 for inserting\n 2 for deletion\n 3 for display\n 4 for exit\n");
        int opc;
        scanf("%d", &opc);
        switch (opc)
        {
        case 1:
            // inserting
            int index;
            printf("Enter the index at which you want to insert the node: ");
            scanf("%d", &index);
            if (index == 0)
            {
                total++;
                struct node *new_node = (struct node *)malloc(sizeof(struct node));
                printf("Enter the data of the new node : ");
                scanf("%d", &new_node->data);
                new_node->next = head;
                head->prev = new_node;
                last->next = new_node;
                new_node->prev = last;
                head = new_node; 
            }
            else if (index > 0 && index < total)
            {
                total++;
                temp = head;
                temp1 = head->next;
                int c = 0;
                while (c < index - 1 && c < total)
                {
                    c++;
                    temp = temp->next;
                    temp1 = temp1->next;
                }
                struct node *new_node = (struct node *)malloc(sizeof(struct node));
                printf("Enter the data of the new node : ");
                scanf("%d", &new_node->data);
                new_node->next = temp1;
                new_node->prev = temp;
                temp->next = new_node;
                temp1->prev = new_node;
            }
            else if (index == total)
            {
                struct node *new_node = malloc(sizeof(struct node));
                printf("Enter the data of the new node : ");
                scanf("%d", &new_node->data);
                new_node->next = head;
                head->prev = new_node;
                last->next = new_node;
                new_node->prev = last;
                last = new_node; // Update last to point to the new node
            }
            break;
        case 2:
            // deletion
            int index1;
            printf("Enter the index of the node you want to delete: ");
            scanf("%d", &index1);
            if (index1 == total)
            {
                int c = 0;
                temp = head;
                while (c < total - 1)
                {
                    c++;
                    temp = temp->next;
                }
                last = last->prev; 
                last->next = head;
                head->prev = last;
                struct node *deleted_node = temp->next;
                temp->next = head;                     
                free(deleted_node);                     
                total--;
            }
            else if (index1 == 0)
            {
                head = temp->next;
                head->prev = last;
                last->next = head;
                struct node *deleted_node = temp; 
                temp = head;                     
                free(deleted_node);             
                total--;
            }
            else if (index1 > 0 && index1 < total)
            {
                int c = 0;
                temp = head;
                temp1 = head->next;
                while (c < index1 - 1)
                {
                    temp = temp->next;
                    temp1 = temp1->next;
                    c++;
                }
                temp->next = temp1->next;
                temp1->next->prev = temp;
                free(temp1);                
                total--;
            }
            break;
        case 3:
            // display
            head = temp;
            printf("Element : %d\n", temp->data);
            temp = temp->next;
            while (temp != head)
            {
                printf("Element : %d\n", temp->data);
                temp = temp->next;
            }
            break;
        case 4:
            //exit
            exit++;
            printf("Exiting........\n");
            break;
        }
    }
    return 0;
}
