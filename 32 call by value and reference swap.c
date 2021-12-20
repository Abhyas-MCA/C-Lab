// WAP IN C to implement call by value and call by reference;

#include <stdio.h>

void swapByValue(int a, int b)
{
  a = a + b;
  b = a - b;
  a = a - b;

  printf("Inside swapByValue()\n");
  printf("a: %d, b: %d\n", a, b);
}

void swapByReference(int *a, int *b)
{
  int temp = *a;
  *a = *b;
  *b = temp;

  printf("Inside swapByReference()\n");
  printf("a: %d, b: %d\n", *a, *b);
}

int main()
{
  int a, b;
  printf("Enter a and b: ");
  scanf("%d%d", &a, &b);
  printf("Before swapping:\n a: %d, b: %d\n", a, b);
  swapByValue(a, b);
  printf("After swapByValue() in main:\n a: %d, b: %d\n", a, b);
  swapByReference(&a, &b);
  printf("After swapByReference() in main:\n a: %d, b: %d\n", a, b);
  return 0;
}