#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
int main()
{
    int a, no = 0, end = 0 ,g = 0; // no=number of node
    while (end == 0)
    {

        printf("Welcome to singley linked list\npress 1 for insertion\n 2 for display");
        scanf("%d", &a);
        switch (a)
        {
        case 1:
            
            printf("Enter the index at which you want to insert: ");
            int i;
            scanf("%d", &i);
            struct node *new_node;
            struct node *head;
            struct node *temp;
            head = temp;

            if (no == 0)
            {
                new_node = (struct node *)malloc(sizeof(struct node));
                printf("Enter the data to insert: ");
                scanf("%d", &new_node->data);
                head = new_node;
            }
            else if (i == 0)
            {
                temp=head;
                new_node = (struct node *)malloc(sizeof(struct node));
                printf("Enter the data to insert: ");
                scanf("%d", &new_node->data);
                new_node->next = NULL;
                new_node->next = head;
                head = new_node;
            }
            else if(i==no){
                g=0;
                head=temp;
                while (g==(i-1))
                {
                    g++;
                    temp=temp->next;
                }
                
                new_node = (struct node *)malloc(sizeof(struct node));
                printf("Enter the data to insert: ");
                scanf("%d", &new_node->data);
                new_node->next = NULL;
                temp->next=new_node;
            }
            else
            {
                temp=head;
                new_node = (struct node *)malloc(sizeof(struct node));
                printf("Enter the data to insert: ");
                scanf("%d", &new_node->data);
                new_node->next = NULL;
                g=0;
                while (g == (i - 1))
                {
                    g++;
                    head = temp;
                    temp = temp->next;
                }
                new_node->next = temp->next;
                temp->next = new_node;
            }
            no++;
            break; 
            case 2:
            temp=head;
            while (temp!=NULL)
            {

                printf("Element: %d",temp->data);
                temp=temp->next;
            }
            
        }
       
    }
}
