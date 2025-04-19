#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
int main()
{
    int z = 0; // number of nodes
    struct node *head;
    if (z = 0)
    {
        struct node *new_node;
        new_node = (struct node *)malloc(sizeof(struct node));
        new_node->next = new_node;
        new_node->data = 1;
        new_node = head;
        z++;
    }
    struct node *temp = head;
    else if (temp->next != temp && a == (z - 1))
    {
        if (a != (z - 1))
        {
            temp = temp->next;
        }
        else
        {
            struct node *new_node;
            new_node = (struct node *)malloc(sizeof(struct node));
            new_node->data = 10;
            temp->next = new_node->next;
            temp->next=new_node;
        }
    }

    return 0;
}