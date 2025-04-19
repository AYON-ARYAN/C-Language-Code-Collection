// top most node is called root
// parent node is the the node which connects children nodes
// child node is the node which is connected to the parent node
// sibling node is trhe node beloging to the same parent node
// leaf node is the node which has no children is called external node
// nodes with atleast one child is called internal node
// depth is number of parent nodes above the node
// height is opposite of depth
// degree of a node is the niumber of the nopde connected to it
/////binary tree is the tree having in which all nodes are having two childrens
// degree of the node is the highest degree at any part of the tree
// if a tree ios having n number of nodes then the number ofedges =n-1
// full or strict binary tree is the tree hwich has 0 or 2 children
// perfect binary tree is the tree in which internal nodes have two children or all leaf nodes are on same level
// complete binary tree is the tree in which all levels are completely filled except possibly the last level or the last level is left aligned
// degenerate tree is the tree in which there are only one children to all parent node
// trees that are only grow on one side is called skewed tree
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

// Function prototypes
void preorderTraversal(struct node *root);
void inorderTraversal(struct node *root);
void postorderTraversal(struct node *root);

int main()
{
    // root data input
    struct node *root = (struct node *)malloc(sizeof(struct node));
    if (root == NULL)
    {
        printf("Memory allocation failed.");
        return -1;
    }
    printf("Enter the data of the root node: ");
    scanf("%d", &root->data);

    struct node *temp = root;
    struct node *temp1 = root;
    struct node *temp2 = root;
    int uni = 0;

    while (uni != 1)
    {
        int choice;
        printf("Enter the option you want\n Press 1 for Insertion at right: \n Press 2 for Insertion at left: \n Press 3 for Adding Branch:\n Press 4 for deleting node\n Press 5 for Preorder Traversal\n Press 6 for Inorder Traversal\n Press 7 for Postorder Traversal\n");
        scanf("%d", &choice);

        switch (choice)
        {
            // insertion at right
        case 1:
            printf("Enter the data after which you want to insert: ");
            int z;
            scanf("%d", &z);
            temp = root;
            temp1 = root;
            temp2 = root;
            temp1 = temp1->right;
            int mo1 = 0;
            if (temp->right->data != z)
            {
                if (mo1 == 0)
                {
                    temp = temp->right;
                    temp1 = temp1->right;
                    mo1++;
                }
                else
                {
                    temp = temp->right;
                    temp1 = temp1->right;
                    temp2 = temp2->right;
                }
            }
            printf("Enter the data of the new node: ");
            int x1;
            scanf("%d", &x1);
            struct node *new1 = (struct node *)malloc(sizeof(struct node));
            if (new1 == NULL)
            {
                printf("Memory allocation failed.");
                return -1;
            }
            new1->data = x1;
            new1->right = temp1;
            temp->right = new1;
            new1->right = NULL;
            break;
        case 2:
            // inserton at left
            printf("Enter the number after which you want to insert: ");
            int po;
            scanf("%d", &po);
            temp = root;
            temp1 = root;
            temp2 = root;
            temp1 = temp1->left;
            int mo2 = 0;
            if (temp->left->data != po)
            {
                if (mo2 == 0)
                {
                    temp = temp->left;
                    temp1 = temp1->left;
                    mo2++;
                }
                else
                {
                    temp = temp->left;
                    temp1 = temp1->left;
                    temp2 = temp2->left;
                }
            }
            printf("Enter the data of the new node: ");
            int x2;
            scanf("%d", &x2);
            struct node *new2 = (struct node *)malloc(sizeof(struct node));
            if (new2 == NULL)
            {
                printf("Memory allocation failed.");
                return -1;
            }
            new2->data = x2;
            new2->left = temp1;
            temp->left = new2;
            new2->left = NULL;
            break;
        case 3:
            printf("Enter the side at which you want to insert the node\nPress 1 for right\nPress 2 for left");
            int f;
            scanf("%d", &f);
            switch (f)
            {
            case 1:
                printf("Enter the data at which you want to add the branch: ");
                int x3;
                scanf("%d", &x3);
                struct node *new_node1 = (struct node *)malloc(sizeof(struct node));
                if (new_node1 == NULL)
                {
                    printf("Memory allocation failed.");
                    return -1;
                }
                new_node1->data = x3;
                temp = root;
                while (temp->right != NULL)
                {
                    temp = temp->right;
                }
                temp->right = new_node1;
                new_node1->right = NULL;
                new_node1->left = NULL;
                break;
            case 2:
                printf("Enter the data at which you want to add the branch: ");
                int x4;
                scanf("%d", &x4);
                struct node *new_node2 = (struct node *)malloc(sizeof(struct node));
                if (new_node2 == NULL)
                {
                    printf("Memory allocation failed.");
                    return -1;
                }
                new_node2->data = x4;
                temp = root;
                while (temp->data != x4)
                {
                    temp = temp->left;
                }
                temp->left = new_node2;
                new_node2->right = NULL;
                new_node2->left = NULL;
                break;
            default:
                printf("Invalid option.\n");
                break;
            }
            break;
        case 4:
            printf("Press 1 for deleting a Parent node right\nPress 2 for deleting a parent node left\nPress 3 for deleting a child node right\nPress 4 for deleting a child node left\n");
            int vh;
            scanf("%d", &vh);
            switch (vh)
            {
            case 1:
                printf("Enter the data at which you want to delete: ");
                int f;
                scanf("%d", &f);
                temp = root;
                temp1 = root;
                temp2 = root;
                temp2 = temp2->right;
                int lkj;
                while (temp->data != f)
                {
                    if (lkj == 0)
                    {
                        temp = temp->right;
                        temp2 = temp2->right;
                        lkj++;
                    }
                    else
                    {
                        temp = temp->right;
                        temp1 = temp1->right;
                        temp2 = temp2->right;
                    }
                }
                temp->right = temp2;
                free(temp1);
                break;
            case 2:
                printf("Enter the data at which you want to delete: ");
                int qw;
                scanf("%d", &qw);
                temp = root;
                temp1 = root;
                temp2 = root;
                temp2 = temp2->left;
                int lkj2;
                while (temp->data != qw)
                {
                    if (lkj2 == 0)
                    {
                        temp = temp->left;
                        temp2 = temp2->left;
                        lkj2++;
                    }
                    else
                    {
                        temp = temp->left;
                        temp1 = temp1->left;
                        temp2 = temp2->left;
                    }
                }
                temp->left = temp2;
                free(temp1);
                break;
            case 3:
                printf("Enter the parent node data at which you want to delete: ");
                int mnb;
                scanf("%d", &mnb);
                temp = root;
                temp1 = root;
                temp2 = root;
                temp2 = temp2->right;
                int lkj3;
                while (temp->data != mnb)
                {
                    if (lkj3 == 0)
                    {
                        temp = temp->right;
                        temp2 = temp2->right;
                        lkj3++;
                    }
                    else
                    {
                        temp = temp->right;
                        temp1 = temp1->right;
                        temp2 = temp2->right;
                    }
                }
                temp->right = temp2;
                free(temp1->left);
                break;
            case 4:
                printf("Enter the parent node data at which you want to delete: ");
                int zxcv;
                scanf("%d", &zxcv);
                temp = root;
                temp1 = root;
                temp2 = root;
                temp2 = temp2->left;
                int lkj4;
                while (temp->data != zxcv)
                {
                    if (lkj4 == 0)
                    {
                        temp = temp->left;
                        temp2 = temp2->left;
                        lkj4++;
                    }
                    else
                    {
                        temp = temp->left;
                        temp1 = temp1->left;
                        temp2 = temp2->left;
                    }
                }
                temp->left = temp2;
                free(temp1->right);
                break;
            default:
                printf("Invalid option.\n");
                break;
            }
            break;
        case 5:
            printf("Preorder Traversal: ");
            preorderTraversal(root);
            printf("\n");
            break;
        case 6:
            printf("Inorder Traversal: ");
            inorderTraversal(root);
            printf("\n");
            break;
        case 7:
            printf("Postorder Traversal: ");
            postorderTraversal(root);
            printf("\n");
            break;
        default:
            printf("Invalid option.\n");
            break;
        }
    }

    return 0;
}

void preorderTraversal(struct node *root)
{
    if (root != NULL)
    {
        printf("%d ", root->data);
        preorderTraversal(root->left);
        preorderTraversal(root->right);
    }
}

void inorderTraversal(struct node *root)
{
    if (root != NULL)
    {
        inorderTraversal(root->left);
        printf("%d ", root->data);
        inorderTraversal(root->right);
    }
}

void postorderTraversal(struct node *root)
{
    if (root != NULL)
    {
        postorderTraversal(root->left);
        postorderTraversal(root->right);
        printf("%d ", root->data);
    }
}
