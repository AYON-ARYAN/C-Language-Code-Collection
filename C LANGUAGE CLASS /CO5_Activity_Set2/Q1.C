#include<stdio.h>

int main() {
    int arr[14] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int a;
    printf("How many digits do you want to add to the array ");
    scanf("%d",&a);


    printf("Original array: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }


    printf("\nEnter additional numbers to add to the array:\n");
    for (int i = 0; i < a; i++) {
        printf("Enter number %d: ", i + 11); 
        scanf("%d", &arr[i + 10]);  
    }


    printf("\nUpdated array: ");
    for (int i = 0; i < 14; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}