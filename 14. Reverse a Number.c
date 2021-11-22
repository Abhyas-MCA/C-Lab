// WAP in C to reverse of an inputted number.

#include <stdio.h>

int main()
{
  int n, rev = 0, digit;
  printf("Enter a number: ");
  scanf("%d", &n);

  while (n != 0)
  {
    digit = n % 10;
    rev = rev * 10 + digit;
    n /= 10;
  }

  printf("Reverse: %d", rev);
  return 0;
}