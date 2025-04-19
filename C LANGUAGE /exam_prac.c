// #include <stdio.h>
// #include <stdlib.h>

// struct node {
//     int data;
//     struct node *next;
// };

// int main() {
//     struct node *head = (struct node *)malloc(sizeof(struct node));
//     if (head == NULL) {
//         printf("Memory allocation failed\n");
//         return 1;
//     }

//     printf("Enter the data of first node you want to create: ");
//     int ddd, end = 0, last = 1;
//     scanf("%d", &ddd);
//     head->data = ddd;
//     head->next = NULL;

//     while (end == 0) {
//         printf("Enter the operation you want:\nPress 1 for insertion\nPress 2 for Deletion\nPress 3 for display\nPress 4 for exit\n");
//         int choice;
//         scanf("%d", &choice);

//         switch (choice) {
//             case 1: {
//                 struct node *new_node = (struct node *)malloc(sizeof(struct node));
//                 if (new_node == NULL) {
//                     printf("Memory allocation failed\n");
//                     break;
//                 }

//                 printf("Enter the data you want to insert: ");
//                 scanf("%d", &new_node->data);
//                 new_node->next = NULL;

//                 printf("At which index you would like to insert the node: ");
//                 int h;
//                 scanf("%d", &h);

//                 if (h == 0) {
//                     new_node->next = head;
//                     head = new_node;
//                 } else if (h == last) {
//                     struct node *temp = head;
//                     while (temp->next != NULL) {
//                         temp = temp->next;
//                     }
//                     temp->next = new_node;
//                 } else if (h > 0 && h < last) {
//                     struct node *temp = head;
//                     for (int i = 0; i < h - 1; i++) {
//                         temp = temp->next;
//                     }
//                     new_node->next = temp->next;
//                     temp->next = new_node;
//                 } else {
//                     printf("Index out of bounds\n");
//                     free(new_node);
//                     break;
//                 }

//                 last++;
//                 break;
//             }

//             case 2: {
//                 printf("Enter the index at which you want to delete: ");
//                 int ll;
//                 scanf("%d", &ll);

//                 if (ll == 0) {
//                     struct node *temp = head;
//                     head = head->next;
//                     free(temp);
//                 } else if (ll > 0 && ll < last) {
//                     struct node *temp = head;
//                     for (int i = 0; i < ll - 1; i++) {
//                         temp = temp->next;
//                     }
//                     struct node *del_node = temp->next;
//                     temp->next = del_node->next;
//                     free(del_node);
//                 } else {
//                     printf("Index out of bounds\n");
//                     break;
//                 }

//                 last--;
//                 break;
//             }

//             case 3: {
//                 struct node *temp = head;
//                 while (temp != NULL) {
//                     printf("%d\n", temp->data);
//                     temp = temp->next;
//                 }
//                 break;
//             }

//             case 4:
//                 printf("Exiting....\n");
//                 end = 1;
//                 break;

//             default:
//                 printf("Invalid choice, please try again\n");
//                 break;
//         }
//     }

//     return 0;
// }
#include <stdio.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
int main()
{
    struct node *head = (struct node *)malloc(sizeof(struct node));
    printf("Enter the data of the head node: ");
    scanf("%d", &head->data);
    head->next = NULL;
    head->prev = NULL;
    int end = 0, last = 1;
    struct node *temp = head;
    while (end != 0)
    {
        printf("Enter the operation you want to perform: \n Press 1 for insertion \n Press 2 for Deletion \n Press 3 for display \nPress 4 for exit");
        int choice;
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            struct node *new = (struct node *)(sizeof(struct node));
            printf("Enter the data you want to insert: ");
            scanf("%d", &new->data);
            printf("Enter the index at which you want to insert the data: ");
            int sp;
            scanf("%d", sp);
            if (sp == 0)
            {
                temp = head;
                new->next = head;
                head->prev = new;
                new->prev = NULL;
                head = new;
                last++;
            }
            else if (sp == last)
            {
                temp = head;
                while (temp->next != NULL)
                {
                    temp = temp->next;
                }
                temp->next = new;
                new->next = NULL;
                last++;
            }
            else
            {
                temp = head;
                int g = 0;
                while (g != sp)
                {
                    temp = temp->next;
                    temp->next = new->next;
                    new->prev = temp;
                    temp->next = new;
                    new->next->prev = new;
                    last++;
                }
            }
        case 2:
            printf("Enter the index at which you want to delete the data: ");
            int rtr;
            scanf("%d",&rtr);
            
        }
    }

    return 0;
}
