// WAP in C to convert a decimal number to binary.

#include <stdio.h>
#include <string.h>

int main()
{
  int n, res[20], i = 0;

  printf("Enter a number: ");
  scanf("%d", &n);

  while (n != 0)
  {
    res[i++] = n % 2;
    n /= 2;
  }

  while (i > 0)
    printf("%d", res[--i]);

  return 0;
}