// WAP in C to find the sum of the following series.
// 1! + 2! + 3! + ... + n!

#include <stdio.h>

int factorial(int n)
{
  if (n <= 1)
    return 1;
  else
    return n * factorial(n - 1);
}

int main()
{
  int n, i, sum = 0;

  printf("Enter a number: ");
  scanf("%d", &n);

  for (i = 1; i <= n; i++)
    sum += factorial(i);

  printf("sum: %d", sum);

  return 0;
}