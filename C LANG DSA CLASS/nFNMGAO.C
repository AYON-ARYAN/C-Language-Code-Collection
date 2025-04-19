// #include<stdio.h>
// #include<stdlib.h>

// struct node{
//     int data;
//     struct node* next;
//     struct node * prev;
// };
// int main(){
// int a,b,c,d;

// //for adding nodes
// printf("at which valude you want to add the node: \n");
// scanf("%d",&a);
// struct node* head;
// head=(struct node *)malloc(sizeof(struct node));
// struct node*temp=head;
// if (a==0)
// {
//     struct node* new_node;
//     new_node=(struct node*)malloc(sizeof(struct node));
//     head=new_node->next;
//     head->data=90;
//     if (new_node->next !=NULL)
//     {
//         new_node->next=head;
//         head->prev=new_node;
//         //making head the new node
//         head=new_node;
//         head->data=99;
//     }
//     else
//     {
//         new_node->next=head;
//         printf("\n element added at beginning\n");
//         new_node->data=10;
//         new_node->prev=NULL;
//         head=new_node;
//     }
//     if (a>1)
//     {
//         new_node=(struct node*)malloc(sizeof(struct node));
//         new_node->next=NULL;
//         new_node->prev=temp;
//         temp->next=new_node;
//     }

// }

// }
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
int main()
{
    // make a npde
    struct node *head;
    head = (struct node *)malloc(sizeof(struct node));
    head->next = NULL;
    head->data = 1;
    printf("Enter the index at which you want the node to be added: ");
    int k, l, m, n;
    struct node *temp = head;
    head = temp;
    scanf("%d", &k);
    if (k == 0)
    {
        struct node *new;
        new = (struct node *)malloc(sizeof(struct node));
        new->next = head;
        new->data = 2;
        head = new;
    }
    int z = 0;
    while (data != NULL)
    {
        head = head->next;
        z++;
    }
    int c = 0,x=0,j=0;
    if (k == c)
    {

        while (c < k - 1)
        {
            c++;
            temp->next;
            struct node *new;
            new = (struct node *)malloc(sizeof(struct node));
            temp->next = new;
        }
    }
    else
    {
        struct node *new;
        new = (struct node *)malloc(sizeof(struct node));
        while (temp != NULL&&x<k)
        {
            x++;
            temp=temp->next;
        }
        new->next=temp;
        while (head!=NULL&&j<k-1)
        {
            j++;
            head=head->next;
        }
        head->next=temp;
    }
}
return 0;
}