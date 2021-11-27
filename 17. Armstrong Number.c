// WAP in C to check whether a number is Armstrong
// sum of cube of digits = given number eg 153

#include <stdio.h>

int main()
{
  int num, temp, d, sum = 0;
  printf("Enter a number: ");
  scanf("%d", &num);
  temp = num;
  while (temp != 0)
  {
    d = temp % 10;
    temp /= 10;
    sum += d * d * d;
  }

  if (sum == num)
    printf("%d is Armstrong number", num);
  else
    printf("%d is not Armstrong number", num);

  return 0;
}
