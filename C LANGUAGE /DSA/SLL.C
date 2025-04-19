#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

int main()
{
    int i = 15, ro = 0;
    struct node *head = (struct node *)malloc(sizeof(struct node));
    head->data = 14;
    struct node *temp = head;
    struct node *temp1 = head;
    
    while (i != 50)
    {
        if (ro == 0)
        {
            struct node *new_node = (struct node *)malloc(sizeof(struct node));
            new_node->data = 21;
            head->next = new_node;
            new_node->next = NULL;
            temp = temp->next;
            ro++;
        }
        else if (i % 7 != 0)
        {
            i++;
        }
        else
        {
            if (i == 49)
            {
                i++;
            }
            else if (i % 7 == 0)
            {
                struct node *new_node = (struct node *)malloc(sizeof(struct node));
                new_node->data = i;
                temp->next = new_node;
                new_node->next = NULL;
                temp = temp->next;
                i++;
                ro++;
            }
        }
    }
    
    // Delete 35
    struct node *temp2 = head;
    temp = head;
    temp1 = head->next;
    
    while (temp1->data != 35)
    {
        temp = temp->next;
        temp1 = temp1->next;
        temp2 = temp2->next;
    }
    
    temp->next = temp1->next;
    free(temp1);
    
    // Insert the number 7 before the first node
    struct node *new_node_first = (struct node *)malloc(sizeof(struct node));
    new_node_first->data = 7;
    new_node_first->next = head;
    head = new_node_first;
    
    // Put back the number 35 at a specified position
    printf("At which node do you want to insert 35?\n");
    int pos;
    scanf("%d", &pos);
    
    temp = head;
    for (int o = 0; o < pos - 1; o++)
    {
        temp = temp->next;
    }
    
    struct node *new_node_35 = (struct node *)malloc(sizeof(struct node));
    new_node_35->data = 35;
    new_node_35->next = temp->next;
    temp->next = new_node_35;
    
    // Display linked list
    temp = head;
    while (temp != NULL)
    {
        printf("Element: %d\n", temp->data);
        temp = temp->next;
    }
    
    return 0;

}