// WAP in C to convert Fahrenheit to Celsius

#include <stdio.h>

int main()
{
  float f;

  printf("Enter temperature in Fahrenheit: ");
  scanf("%f", &f);

  printf("In Celsius: %.2f", (f - 32.0) * (5.0 / 9.0));
  return 0;
}