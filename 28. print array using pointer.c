// WAP in C to print number of an array using pointers

#include <stdio.h>

int main()
{
  int arr[10], i, *ptr;

  printf("Enter 10 numbers: ");
  for (i = 0; i < 10; i++)
    scanf("%d", &arr[i]);

  ptr = arr;
  printf("Elements in array: ");
  for (i = 0; i < 10; i++)
    printf("%d ", *(ptr + i));

  return 0;
}