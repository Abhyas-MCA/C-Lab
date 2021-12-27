// WAP in C to sort an array using selection sort

#include <stdio.h>

void selectionSort(int arr[])
{
  int i, j, min, temp;
  for (i = 0; i < 10; i++)
  {
    min = i;
    for (j = i + 1; j < 10; j++)
      if (arr[j] < arr[min])
        min = j;

    temp = arr[min];
    arr[min] = arr[i];
    arr[i] = temp;
  }
}

int main()
{
  int arr[10], i;
  printf("Enter 10 values:\n");
  for (i = 0; i < 10; i++)
    scanf("%d", &arr[i]);
  selectionSort(arr);
  printf("Sorted Array: ");
  for (i = 0; i < 10; i++)
    printf("%d ", arr[i]);
  return 0;
}