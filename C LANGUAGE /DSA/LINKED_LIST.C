#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next; // it is a struct node type pointer and it will point on struct node
};
//display function
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
    //declareing the number of nodes in the structures
    struct node *head;
    struct node *head2;
    struct node *head3;
    struct node *head4;

    // allocated memory will be found at the heap
    head = (struct node *)malloc(sizeof(struct node));
    head2 = (struct node *)malloc(sizeof(struct node));
    head3 = (struct node *)malloc(sizeof(struct node));
    head4 = (struct node *)malloc(sizeof(struct node));

    // linked first and second node
    head->data = 7;     // number in first node = 7
    head->next = head2; // then pointed towards second node

    // linked second and third node
    head2->data = 12;    // number in second node = 12
    head2->next = head3; // then pointed towards third node

   //linked third to fourth node
    head3->data = 24;   // number in third node = 24
    head3->next =head4; // then pointed towards fourth node
 // terminate the list at fourth node
 //linked third to fourth node
    head4->data = 44;   // number in third node = 44
    head4->next =NULL; // then pointed towards null for the end
    travel(head);//for traversal in the node

    return 0;
}
