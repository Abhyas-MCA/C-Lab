// WAP in C to implement the basic operation in in a 2-D array.

#include <stdio.h>

int main()
{
  int arr[3][3], i, j;
  printf("Enter first array:\n");
  for (i = 0; i < 3; i++)
  {
    printf("Enter row %d: ", i + 1);
    for (j = 0; j < 3; j++)
      scanf("%d", &arr[i][j]);
  }

  printf("2D array is: \n");
  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
      printf("%d\t", arr[i][j]);
    printf("\n");
  }

  return 0;
}