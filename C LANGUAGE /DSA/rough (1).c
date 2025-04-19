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
    int node = 1;
    struct node *head = (struct node *)malloc(sizeof(struct node));
    printf("Enter the data of this node: \n");
    scanf("%d", &head->data);
    struct node *temp = head;
    struct node *temp1 = head;
    struct node *temp2 = head;
    int y = 0;
    while (y == 0)
    {
        printf("Welcome to doubly linked list\nPress 1 for insertion\nPress 2 for deletion\nPress 3 for display node\nPress 4 for counting the node\nPress 5 for exit");
        int choice;
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter the place you want to insert");
            int index;
            scanf("%d", &index);
            if (index == 0)
            {
                struct node *new_node = (struct node *)malloc(sizeof(struct node));
                printf("Enter the data of the node: ");
                scanf("%d", &new_node->data);
                new_node->next = head;
                new_node->prev = NULL;
                head->prev = new_node;
                head = new_node;
                node++;
            }
            else if (index > 0 && index < node)
            {
                temp = head;
                temp1 = head;
                int x = 0;
                struct node *new_node1 = (struct node *)malloc(sizeof(struct node));
                printf("Enter the data of the new node: ");
                scanf("%d", &new_node1->data);
                temp1 = temp1->next;
                while (x != index)
                {
                    temp = temp->next;
                    temp1 = temp1->next;
                    x++;
                }
                new_node1->next = temp1;
                new_node1->prev = temp;
                temp1->prev = new_node1;
                temp->next = new_node1;
                node++;
            }
            else if (index == node)
            {
                struct node *new_node3 = (struct node *)malloc(sizeof(struct node));
                printf("Enter the data of the node: ");
                scanf("%d", &new_node3->data);
                new_node3->next = NULL;
                temp = head;
                temp1 = head;
                while (temp != NULL)
                {
                    temp = temp->next;
                }
                struct node *new_node4 = (struct node *)malloc(sizeof(struct node));
                printf("Enter the data of the node: ");
                scanf("%d", &new_node4->data);
                temp->next = new_node4;
                new_node4->prev = temp;
                node++;
            }
            else
            {
                printf("Enter the right index: ");
            }
            
            break;
        case 2:
            int index1;
            printf("Enter the index of the linked: ");
            scanf("%d", &index1);
            // deletion from head
            temp = head;
            temp1 = head;
            temp2 = head;
            if (index1 == 0)
            {
                temp1 = temp1->next;
                free(head);
                head = temp1;
                head->prev = NULL;
            }
            // deletion from tail
            else if (node == index1)
            {
                int yo = 0;
                while (temp != NULL)
                {
                    if (yo == 0)
                    {
                        temp = temp->next;
                        yo++;
                    }
                    else
                    {
                        temp1 = temp1->next;
                        temp = temp->next;
                        yo++;
                    }
                }
                free(temp);
                temp1->next = NULL;
            }
            // deletion at specific node
            if (index1 < node && index1 > 0)
            {
                int zo = 0, xo = 0;
                temp2 = temp2->next;
                while (zo != index)
                {
                    if (xo == 0)
                    {
                        xo++;
                        temp1 = temp1->next;
                        temp2 = temp2->next;
                    }
                    else
                    {
                        temp = temp->next;
                        temp1 = temp1->next;
                        temp2 = temp2->next;
                    }
                }
                free(temp1);
                temp->next = temp2;
                temp2->prev = temp;
            }
            else
            {
                printf("Enter the right index");
            }
            break;
        case 3:
            temp = head;
            int zxc = 0;
            while (temp != NULL)
            {
                printf("ELEMENT = %d", temp->data);
                temp = temp->next;
            }

            break;
        case 4:
            temp = head;
            int count = 0;
            while (temp != NULL)
            {
                count++;
                temp = temp->next;
            }
            printf("Total number of nodes: %d", count);
            break;
        case 5:
            printf("Exiting....");
            y++;
            break;

        default:
            printf("Press correct number");
            break;
        }
    }

    return 0;
}
