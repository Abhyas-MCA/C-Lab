// WAP to check whether a number is perfect.
// sum of factors equals given number

#include <stdio.h>

int main()
{
  int n, temp, digit, sum = 0;

  printf("Enter a number: ");
  scanf("%d", &n);

  temp = n;
  while (temp != 0)
  {
    digit = temp % 10;
    temp /= 10;
    sum += digit;
  }

  if (sum == n)
    printf("%d is perfect", n);
  else
    printf("%d is not perfect", n);

  return 0;
}