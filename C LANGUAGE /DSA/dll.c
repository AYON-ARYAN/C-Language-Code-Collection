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
    int i = 2004;
    struct node *head = (struct node *)malloc(sizeof(struct node));
    head->data = 2004;
    head->next = NULL;
    head->prev = NULL;
    struct node *temp = head;
    struct node *temp1 = head;
    struct node *temp2 = head;
    while (i != 2048)
    {
        struct node *new_node = (struct node *)malloc(sizeof(struct node));
        new_node->data = i;
        temp->next = new_node;
        new_node->prev = temp;
        new_node->next = NULL;
        temp = temp->next;
        i = i + 4;
    }
    // scerch for 2032
    temp = head;
    int z = 0;
    while (temp->data != 2032)
    {
        temp = temp->next;
        z++;
    };
    printf("2032 is found at:%d\n", z);
    temp = head;
    temp1 = head;
    temp2 = head;

    // insert 2000 before 2004
    struct node *new_node1 = (struct node *)malloc(sizeof(struct node));
    new_node1->data = 2000;
    new_node1->next = head;
    new_node1->prev = NULL;
    head->prev = new_node1;
    head = new_node1;
    // insert 2048 after 2044
    temp = head;
    struct node *new_node2 = (struct node *)malloc(sizeof(struct node));
    new_node2->data = 2048;
    while (temp->next != NULL)
    {
        temp = temp->next;
    };
    new_node2->next = NULL;
    new_node2->prev = temp;
    temp->next = new_node2;

    // scerch for 2032
    temp = head;
    int x = 0;
    while (temp->data != 2032)
    {
        temp = temp->next;
        x++;
    };
    printf("2032 is found at:%d\n", x);
    //delete 2000;
    temp=head;
    temp1=head;
    temp=temp->next;
    temp->prev=NULL;
    head=head->next;
    free(temp1);
 // scerch for 2032
    temp = head;
    int y = 0;
    while (temp->data != 2032)
    {
        temp = temp->next;
        y++;
    };
     printf("2032 is found at:%d\n", y);
    // display
    temp = head;
    while (temp != NULL)
    {
        printf("%d\n", temp->data);
        temp = temp->next;
    }

    return 0;
}