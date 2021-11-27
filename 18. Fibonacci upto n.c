// WAP in C to find Fibonacci series upto n terms

#include <stdio.h>

int main()
{
  int n, a = 0, b = 1, c, count;

  printf("Enter n: ");
  scanf("%d", &n);

  for (count = 1; count <= n; count++)
  {
    printf("%d ", a);
    c = a + b;
    a = b;
    b = c;
  }

  return 0;
}