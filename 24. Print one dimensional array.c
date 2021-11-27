// WAP in C to print one dimensional array of numbers

#include <stdio.h>

int main()
{
  int arr[50], n, i;
  printf("How many numbers?\n");
  scanf("%d", &n);

  printf("Enter numbers:\n");
  for (i = 0; i < n; i++)
    scanf("%d", &arr[i]);

  printf("You entered: ");
  for (i = 0; i < n; i++)
    printf("%d ", arr[i]);

  return 0;
}