#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *left;
    struct node *right;
};
int main(){
    struct node* root=(struct node*)malloc(sizeof(struct node));
    printf("Enter the value of the root node\n");
    scanf("%d",&root->data);
    struct node* temp=root;
    int ff=root->data;
    struct node *new =(struct node*)malloc(sizeof(struct node));
    printf("Enter the data you want to add in the tree: ");
    scanf("%d",&new->data);
    if (new->data>root)
    {
        temp=root;
        while (temp->right!=NULL)
        {
          temp=temp->right;
        }
        

    }
    
    return 0;
}