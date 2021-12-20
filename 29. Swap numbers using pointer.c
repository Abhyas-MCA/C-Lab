// WAP in C to swap two numbers using pointers;

#include <stdio.h>

int main()
{
  int a, b;
  int *pa = &a, *pb = &b;
  int temp;
  printf("Enter A and B: ");
  scanf("%d%d", &a, &b);

  printf("Before swap\n A: %d, B: %d\n", a, b);

  temp = *pa;
  *pa = *pb;
  *pb = temp;

  printf("After swap\n A: %d, B: %d\n", a, b);
  return 0;
}