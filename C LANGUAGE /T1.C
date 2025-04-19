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
    struct node *head2;
    struct node *head3;

    // Allocate memory for nodes
    head = (struct node *)malloc(sizeof(struct node));
    head2 = (struct node *)malloc(sizeof(struct node));
    head3 = (struct node *)malloc(sizeof(struct node));

    // Assign data and links
    head->data = 1;
    head->next = head2;
    head2->data = 9;
    head2->next = head3;
    head3->data = 4;
    head3->next = NULL;

    // Print the initial linked list
    struct node *temp = head;
    while (temp != NULL)
    {
        printf("%d\n", temp->data);
        temp = temp->next;
    }

    // Adding element to a node
    int s, z = 1;
    printf("Enter the position at which you want to insert the node: ");
    scanf("%d", &s);

    struct node *t = head;
    struct node *new_node = (struct node *)malloc(sizeof(struct node));

    printf("Enter the number you want to store: ");
    int y;
    scanf("%d", &y);

    new_node->data = y;
    new_node->next = NULL; // Initialize the next pointer

    if (s == 1) // Special case: Insert at the beginning
    {
        new_node->next = head;
        head = new_node;
    }
    else // Insert at position s
    {
        while (z < s - 1)
        {
            z++;
            t = t->next;
        }

        new_node->next = t->next;
        t->next = new_node;
    }

    // Print the updated linked list
    temp = head;
    while (temp != NULL)
    {
        printf("%d\n", temp->data);
        temp = temp->next;
    }

  //deleting an node
  printf("Enter the index you want to delete the node at: ");
  int f,g;
  scanf("%d",&f);
  if (f==1)
  {

    head->next=head;
    free(t);
    printf("Node deleted");
    
  };
  while (t!=f)
  {
    t->next;
    
  }
  
  

    return 0;
}
