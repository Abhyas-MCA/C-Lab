// WAP in C to find maximum and minimum in an array
#include <stdio.h>
#include <math.h>

int main()
{
  int arr[10], i, max = -10000, min = 10000;
  printf("min: %d, max: %d\n", min, max);
  printf("Enter 10 values: ");
  for (i = 0; i < 10; i++)
    scanf("%d", &arr[i]);

  for (i = 0; i < 10; i++)
    if (arr[i] < min)
      min = arr[i];
    else if (arr[i] > max)
      max = arr[i];

  printf("Minimum: %d\nMaximum: %d", min, max);
}