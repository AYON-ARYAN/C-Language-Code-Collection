// (4) Create a Circular DLL containing all numbers between 1 to 50 which are divisible by 7. Do not include the number 7 and 49. Ensure 35 exists. The list need not be sorted. Do the following:
// ● Delete the number 35 and ensure the node-links are maintained after deletion
// ● Display the last number in the list
// ● Insert the number 49 after this last node
// ● Insert the number 7 before the first node
// ● Put back the number 35 in any position other than the first and last node.
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
    struct node *head = (struct node *)malloc(sizeof(struct node));
    head->data = 14;
    head->next = head;
    head->prev = head;
    struct node *last = head;
    struct node *temp = head;
    struct node *temp1 = head;
    struct node *temp2 = head;
    int i = 15;
    while (i != 49)
    {
        if (i == 49)
        {
            i++;
        }
        else if (i % 7 == 0)
        {
            struct node *new_node = (struct node *)malloc(sizeof(struct node));
            new_node->data = i;
            last->next = new_node;
            new_node->prev = last;
            last = last->next;
            last->next = head;
            head->prev = last;
            i++;
        }
        else
        {
            i++;
        }
    }
    //// ● Delete the number 35 and ensure the node-links are maintained after deletion

    temp = head;
    temp1 = head;
    temp2 = head;
    temp2=temp2->next;
    int c = 0;
    while (temp->data != 35)
    {
        if (c == 0)
        {
            temp = temp->next;
            temp2 = temp2->next;
            c++;
        }
        else
        {
            temp = temp->next;
            temp2 = temp2->next;
            temp1=temp1->next;
        }
    }
    temp1->next=temp2;
    temp2->prev=temp1;
    free(temp2);
    // ● Display the last number in the list
    printf("Element: %d\n", last->data);
    // ● Insert the number 49 after this last node
struct node*new1=(struct node*)malloc(sizeof(struct node));
new1->data=49;
last->next=new1;
new1->prev=last;
last=new1;
last->next=head;
head->prev=last;

// ● Insert the number 7 before the first node

    struct node*new2=(struct node*)malloc(sizeof(struct node));
    new2->data=7;
    new2->next=head;
    head->prev=new2;
    head=new2;
    head->prev=last;
    last->next=head;
    // display
    temp = head;
    while (temp->next != head)
    {
        printf("Element: %d\n", temp->data);
        temp = temp->next;
    }
    printf("Element: %d\n", last->data);

    return 0;
}