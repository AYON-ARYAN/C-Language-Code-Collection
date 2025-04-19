#include <stdio.h>

int main() {
    int tot;
    printf("Enter the size of the array: ");
    scanf("%d", &tot);

    int arr[tot];

    printf("Enter %d elements:\n", tot);
    for (int i = 0; i < tot; i++) {
        scanf("%d", &arr[i]);
    }

    printf("The array is: ");
    for (int i = 0; i < tot; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");


    int max = arr[0]; 
    int min = arr[0]; 

    for (int i = 1; i < tot; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    printf("Maximum value: %d\n", max);
    printf("Minimum value: %d\n", min);

    return 0;
}
