// WAP in C to find factorial of any number.

#include <stdio.h>

int main()
{
  int n, i;
  long int factorial = 1;
  printf("Enter a number: ");
  scanf("%d", &n);
  for (i = 2; i <= n; i++)
    factorial *= i;

  printf("Factorial: %ld", factorial);

  return 0;
}