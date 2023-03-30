#include <stdio.h>

int main() {
   int arr[100], n, i, *ptr, x, flag = 0;

   printf("Enter the number of elements in the array: ");
   scanf("%d", &n);

   printf("Enter %d elements:\n", n);
   for (i = 0; i < n; i++) {
      scanf("%d", &arr[i]);
   }

   printf("Enter the element to search: ");
   scanf("%d", &x);

   ptr = arr;

   for (i = 0; i < n; i++) {
      if (*ptr == x) {
         printf("%d is present at location %d.\n", x, i+1);
         flag = 1;
         break;
      }
      ptr++;
   }

   if (flag == 0) {
      printf("%d is not present in the array.\n", x);
   }

   return 0;
}