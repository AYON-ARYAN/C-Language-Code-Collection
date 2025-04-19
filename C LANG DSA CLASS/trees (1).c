#include<stdio.h>
#include<stdlib.h>

struct tree{
    int data;
    struct tree *left;
    struct tree *right;
};

// Function to perform inorder traversal
void inorder(struct tree *root){
    if(root != NULL){
        inorder(root->left);
        printf("%d\n", root->data);
        inorder(root->right);
    }
}

// Function to perform preorder traversal
void preorder(struct tree *root){
    if(root != NULL){
        printf("%d\n", root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

// Function to perform postorder traversal
void postorder(struct tree *root){
    if(root != NULL){
        postorder(root->left);
        postorder(root->right);
        printf("%d\n", root->data);
    }
}

int main(){
    // Creating tree nodes
    struct tree *root = (struct tree*)malloc(sizeof(struct tree));
    struct tree *root1 = (struct tree*)malloc(sizeof(struct tree));
    struct tree *root2 = (struct tree*)malloc(sizeof(struct tree));
    struct tree *root3 = (struct tree*)malloc(sizeof(struct tree));
    struct tree *root4 = (struct tree*)malloc(sizeof(struct tree));
    struct tree *root5 = (struct tree*)malloc(sizeof(struct tree));
    struct tree *root6 = (struct tree*)malloc(sizeof(struct tree));
    struct tree *root7 = (struct tree*)malloc(sizeof(struct tree));
    struct tree *root8 = (struct tree*)malloc(sizeof(struct tree));
    
    // Building the binary tree
    root->data = 5;
    root->left = root1;
    root1->data = 2;
    root1->left = root2;
    root2->left = NULL;
    root2->right = NULL;
    root1->right = root3;
    root3->data = 3;
    root3->left = NULL;
    root3->right = NULL;
    root->right = root4;
    root4->data = 12;
    root4->left = root5;
    root5->data = 9;
    root5->left = NULL;
    root5->right = NULL;
    root4->right = root6;
    root6->data = 21;
    root6->left = root7;
    root7->data = 19;
    root7->left = NULL;
    root7->right = NULL;
    root6->right = root8;
    root8->data = 25;
    root8->left = NULL;
    root8->right = NULL;
    
    // Printing in inorder traversal
    printf("Inorder traversal:\n");
    inorder(root);
    printf("\n");

    // Printing in preorder traversal
    printf("Preorder traversal:\n");
    preorder(root);
    printf("\n");

    // Printing in postorder traversal
    printf("Postorder traversal:\n");
    postorder(root);
    printf("\n");

    return 0;
}
