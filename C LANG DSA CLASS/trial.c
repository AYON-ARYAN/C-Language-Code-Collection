#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
    struct node *prev;
};

int main() {
    struct node *head = (struct node *)malloc(sizeof(struct node));
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    head->next = newNode;
    newNode->prev = head;
    newNode->next = NULL;
    newNode->data = 10;
    struct node *temp = head;
    struct node *temp2 = head;
    printf("There are two nodes made for you already.\n");

    // Inserting a node
    printf("Enter the index at which you want the node to be inserted: ");
    int index, total = 1;
    scanf("%d", &index);

    if (index > 0 && index < total) {
        int z = 0;
        total++;
        while (z < index - 1) {
            z++;
            temp = temp->next;
            temp2 = temp2->next;
        }
        struct node *newNode = (struct node *)malloc(sizeof(struct node));
        newNode->next = temp->next;
        newNode->prev = temp;
        temp->next->prev = newNode;
        temp->next = newNode;
    } else if (index == total) {
        total++;
        temp = head;
        int z = 0;
        while (z < index - 1) {
            z++;
            temp = temp->next;
        }
        struct node *newNode = (struct node *)malloc(sizeof(struct node));
        temp->next = newNode;
        newNode->prev = temp;
        newNode->next = NULL;
    } else if (index == 0) {
        total++;
        struct node *newNode = (struct node *)malloc(sizeof(struct node));
        newNode->next = head;
        head->prev = newNode;
        newNode->prev = NULL;
        head = newNode;
    }

    // Deletion
    printf("Enter the index at which you want the node to be deleted: ");
    int index2;
    scanf("%d", &index2);

    if (index2 == 0) {
        temp = head;
        head = head->next;
        head->prev = NULL;
        free(temp);
        total--;
    } else if (index2 == total - 1) {
        int x = 0;
        temp2 = head;
        while (x < total - 2) {
            temp2 = temp2->next;
            x++;
        }
        temp = temp2->next;
        temp2->next = NULL;
        free(temp);
        total--;
    } else if (index2 > 0 && index2 < total) {
        total--;
        temp = head;
        temp2 = head;
        int z = 0;
        while (z < index2 - 1) {
            temp = temp->next;
            z++;
        }
        temp2 = temp->next;
        temp->next = temp2->next;
        temp2->next->prev = temp;
        free(temp2);
    }
    
    return 0;
}
