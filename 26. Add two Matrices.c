// WAP to Add two matrices

#include <stdio.h>

void inputMatrix(char message[], int arr[3][3])
{
  int i, j;
  printf(message);
  for (i = 0; i < 3; i++)
  {
    printf("\tEnter row %d: ", i + 1);
    scanf("%d%d%d", &arr[i][0], &arr[i][1], &arr[i][2]);
  }
}

int main()
{
  int arr1[3][3], arr2[3][3], sum[3][3], i, j;

  inputMatrix("Enter first matrix: \n", arr1);
  inputMatrix("Enter second matrix: \n", arr2);

  for (i = 0; i < 3; i++)
    for (j = 0; j < 3; j++)
      sum[i][j] = arr1[i][j] + arr2[i][j];

  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
      printf("%d\t", sum[i][j]);
    printf("\n");
  }

  return 0;
}