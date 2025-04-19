#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

void insert(struct node *root, int enter)
{
    struct node *temp = root;

    while (1)
    {
        if (enter < temp->data)
        {
            if (temp->left == NULL)
            {
                temp->left = (struct node *)malloc(sizeof(struct node));
                temp = temp->left;
                temp->data = enter;
                temp->left = NULL;
                temp->right = NULL;
                break;
            }
            else
            {
                temp = temp->left;
            }
        }
        else
        {
            if (temp->right == NULL)
            {
                temp->right = (struct node *)malloc(sizeof(struct node));
                temp = temp->right;
                temp->data = enter;
                temp->left = NULL;
                temp->right = NULL;
                break;
            }
            else
            {
                temp = temp->right;
            }
        }
    }
}

int main()
{
    struct node *root = (struct node *)malloc(sizeof(struct node));
    printf("Enter the data of the root node: ");
    scanf("%d", &root->data);
    root->left = NULL;
    root->right = NULL;

    int choice = 1;
    int enter;

    while (choice)
    {
        printf("1. Insert\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter the data you want to insert: ");
            scanf("%d", &enter);
            insert(root, enter);
            break;
        case 0:
            choice = 0; 
            break;
        default:
            printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
