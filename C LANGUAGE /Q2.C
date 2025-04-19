#include <stdio.h>

int main() {
  int n;
  printf("Enter the number of elements you want in the array: ");
  scanf("%d", &n);

  int arr[n];
  int *ptr = arr;

  printf("Enter array: ");
  for (int i = 0; i < n; i++) {
    scanf("%d", ptr + i);
  }

  printf("Elements of the array are: ");
  for (int i = 0; i < n; i++) {
    printf("%d ", *(ptr + i));
  }

  return 0;
}
