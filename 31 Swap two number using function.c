// WAP in C for swapping two number using functions.

#include <stdio.h>

void swap(int a, int b)
{
  a = a + b;
  b = a - b;
  a = a - b;

  printf("After swapping in function:\n a: %d, b: %d\n", a, b);
}

int main()
{
  int a, b;
  printf("Enter a and b: ");
  scanf("%d%d", &a, &b);

  printf("Before swapping in main:\n a: %d, b: %d\n", a, b);
  swap(a, b);
  printf("After swapping in main:\n a: %d, b: %d\n", a, b);

  return 0;
}