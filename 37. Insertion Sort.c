// WAP in C to sort an array using insertino sort.
#include <stdio.h>

void insertionSort(int arr[])
{
  int i, j, key, temp;
  for (i = 1; i < 10; i++)
  {
    key = arr[i];
    j = i - 1;
    while (j >= 0 && arr[j] > key)
    {
      arr[j + 1] = arr[j];
      j--;
    }
    arr[j + 1] = key;
  }
}

int main()
{
  int arr[10], i;
  printf("Enter 10 numbers: ");
  for (i = 0; i < 10; i++)
    scanf("%d", &arr[i]);

  insertionSort(arr);

  printf("Sorted Array: ");
  for (i = 0; i < 10; i++)
    printf("%d ", arr[i]);

  return 0;
}