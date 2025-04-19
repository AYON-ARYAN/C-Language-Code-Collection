#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
int main()
{
    struct node *head;
    head = (struct node *)malloc(sizeof(struct node));
    head->data = 10;
    head->next = head;
    struct node *temp = head;
    // insert
    int temp1;
 printf("Enter the index at which you want the node: ");
    scanf("%d", &a);
     int a, b, c;
     scanf("%d", &b);
  
    c=0;
    while (temp->next !=head)
    {c++;
        if (temp->data !=b)
        {
            temp=temp->next;
        }
        
    }
    
 
    
    
        printf("Enter the data: ");
        scanf("%d", &b);
        struct node *new;
        new = (struct node *)malloc(sizeof(struct node));
        new->data=b;
        temp->next=temp1;

    

    return 0;
}