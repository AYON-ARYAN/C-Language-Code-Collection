#include<stdio.h>

int main() {
    int arr[5] = {1, 2, 2, 4, 3};


    printf("Original array: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]*arr[i]);
    }
    


    return 0;
}
