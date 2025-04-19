#include<stdio.h>

int main() {
    int arr[5] = {1, 2, 2, 4, 3};
    int count[5] = {0}; 

    printf("Original array: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);


        count[arr[i] - 1]++;
    }

    printf("\nCount of each number:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d occurs %d times\n", i + 1, count[i]);
    }

    return 0;
}
