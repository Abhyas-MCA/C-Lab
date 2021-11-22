// WAP in C to addition, multiplication, division and subtraction using switch case.

#include <stdio.h>

int main()
{
  float n1, n2;
  int choice;
  printf("Enter two numbers: ");
  scanf("%f%f", &n1, &n2);

  printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n");
  printf("Enter your choice: ");
  scanf("%d", &choice);

  switch (choice)
  {
  case 1:
    printf("Sum: %.2f", n1 + n2);
    break;
  case 2:
    printf("Difference: %.2f", n1 - n2);
    break;
  case 3:
    printf("Product: %.2f", n1 * n2);
    break;
  case 4:
    if (n2 != 0)
      printf("Quotient: %.2f", n1 / n2);
    else
      printf("Cannot divide by 0");
    break;

  default:
    printf("Invalid input");
    break;
  }

  return 0;
}