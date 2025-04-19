// Develop a menu driven program for the following operations of on a Singly Linked
// List.
// (a) Insertion at the beginning.
// (b) Insertion at the end.
// (c) Insertion in between (before or after a node having a specific value, say 'Insert a new Node 35 before/after the Node 30').
// (d) Deletion from the beginning.
// (e) Deletion from the end.
// (f) Deletion of a specific node, say 'Delete Node 60').
// (g) Search for a node and display its position from head.
// (h) Display all the node values.
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
int main()
{

    int choice;
    struct node *head = (struct node *)malloc(sizeof(struct node));
    int d;
    int exit = 0;
    printf("Enter the data to be inserted to the node");
    scanf("%d", &d);
    head->data = d;
    head->next = NULL;
    struct node *last = head;
    struct node *temp = head;
    struct node *temp1 = head;
    while (exit == 0)
    {

        printf("WELCOME TO SINGLY LINKED LIST\nPress 1 for insertion in the beginning\nPress 2 for insertion at the end\nPress 3 for insertion in between\nPress 4 for deletion from beginning\nPress 5 for deletion from end\nPress 6 for deletion of a specific node\nPress 7 for search for a node\nPress 8 for display\nPress 9 for exit\n");
        scanf("%d", &choice);
        ////////////////
        int num = 1;
        switch (choice)
        {
        case 1:
            num++;
            struct node *new_node = (struct node *)malloc(sizeof(struct node));
            int ele;
            printf("Enter the data to be inserted to the node");
            scanf("%d", &ele);
            new_node->data = ele; 
            new_node->next = head;
            head = new_node;
            break;
        case 2:
            num++;
            struct node *new_node1 = (struct node *)malloc(sizeof(struct node));
            int ef;
            printf("Enter the data to be inserted to the node");
            scanf("%d", &ef);
            new_node1->data = ef;
            while (temp1 != NULL)
            {
                temp1 = temp1->next;
            }
            temp1->next = new_node1;
            new_node1->next = NULL;
            new_node1 = last;
            break;
        case 3:
            int u;
            printf("Enter the data at which you wnat the node to be inserted: ");
            scanf("%d", &u);
            struct node *new_node2 = (struct node *)malloc(sizeof(struct node));
            int kl;
            printf("Enter the data to be inserted to the node");
            scanf("%d", &kl);
            new_node2->data = kl;
            temp1 = head;
            temp1 = temp1->next;
            while (temp->data != u)
            {
                temp = temp->next;
                temp1 = temp1->next;
            }
            temp->next = new_node2;
            new_node2->next = temp1;
            break;

        case 4:
            printf("Deleted node =%d", head->data);
            temp = head;
            temp1 = head;
            head = head->next;
            free(temp);
            temp = head;
            temp1 = head;
            break;
        case 5:
            int a = 1;
            temp = head;
            temp1 = head;
            while (temp != NULL)
            {
                if (a == 1)
                {
                    temp = temp->next;
                    a++;
                }
                else
                {
                    temp = temp->next;
                    temp1 = temp1->next;
                }
            }
            printf("Deleted node =%d", temp->data);
            temp1->next = NULL;
            free(temp);
            break;
        case 6:
            head = temp;
            printf("Deleted node =%d", head->data);
            head = head->next;
            free(temp);
            break;
        case 7:
            head = temp;
            head = temp1;
            int m = 0;
            while (temp != NULL)
            {
                if (m = 0)
                {
                    m++;
                    temp = temp->next;
                }
                temp = temp->next;
                temp1 = temp1->next;
            }
            printf("Deleted Element: %d\n", temp->data);
            temp1->next = NULL;
            free(temp);
            break;
        case 8:
            struct node *temp2 = head;
            printf("Enter the element you want to delete: ");
            int po;
            scanf("%d", &po);
            head = temp;
            head = temp1;
            int s = 0;
            temp1 = temp1->next;
            while (temp->data != po)
            {
                if (s == 0)
                {
                    temp = temp->next;
                    temp1 = temp1->next;
                }
                else
                {
                    temp = temp->next;
                    temp1 = temp1->next;
                    temp2 = temp2->next;
                }
            }
            printf("Deleted Element: %d\n", temp->data);
            temp2->next = temp1;
            free(temp);
            break;
        case 9:
            printf("Enter the data of node you want to scerch for: ");
            int z, hn = 0;
            scanf("%d", &z);
            head = temp;
            while (head->next != z)
            {
                temp = temp->next;
                hn++;
            }
            printf("Element is at index %d\n", hn);
            break;
        case 10:
            head = temp;
            while (temp->data != NULL)
            {
                printf("Element: %d", temp->data);
                temp = temp->next;
            }
            break;
        case 11:
            printf("Exiting....");
            exit++;
            break;
        default:
            printf("Wrong input");
            break;
        }
    }
    return 0;
}