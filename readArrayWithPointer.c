#include <stdio.h>

int main() {
  int arr[10]; // Declate Integer Array
  int *poin; // Declare Integer Pointer
  int i; // Looping Variable

  poin = &arr[0]; // Assign base address of array

  printf("Enter array elements: \n");
  // Reading through array
  for (i = 0; i < 10; i++) {
    printf("Enter element %02d: ", i + 1);
    scanf("%d", poin + i);
  }

  printf("\nEntered array elements are: ");
  printf("\nAddress \t Value \n");
  // Printing the array ( Address / Value )
  for (i = 0; i < 10; i++) {
    printf("%p \t %03d\n", (poin + i), *(poin + i));
  }

  return 0;
}