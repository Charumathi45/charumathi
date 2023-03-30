#include <stdio.h>

void swapArrays(int *arr1, int *arr2, int size1, int size2);

int main() {
  int arr1[] = {1, 2, 3};
  int arr2[] = {4, 5, 6, 7};
  int size1 = sizeof(arr1) / sizeof(int);
  int size2 = sizeof(arr2) / sizeof(int);

  printf("Before swapping:\n");
  printf("arr1: ");
  for (int i = 0; i < size1; i++) {
    printf("%d ", arr1[i]);
  }
  printf("\narr2: ");
  for (int i = 0; i < size2; i++) {
    printf("%d ", arr2[i]);
  }

  swapArrays(arr1, arr2, size1, size2);

  printf("\nAfter swapping:\n");
  printf("arr1: ");
  for (int i = 0; i < size1; i++) {
    printf("%d ", arr1[i]);
  }
  printf("\narr2: ");
  for (int i = 0; i < size2; i++) {
    printf("%d ", arr2[i]);
  }

  return 0;
}

void swapArrays(int *arr1, int *arr2, int size1, int size2) {
  int maxSize = size1 > size2 ? size1 : size2;
  for (int i = 0; i < maxSize; i++) {
    int temp = *(arr1 + i);
    *(arr1 + i) = *(arr2 + i);
    *(arr2 + i) = temp;
  }
}