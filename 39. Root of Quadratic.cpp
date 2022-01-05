#include <stdio.h>

int main()
{
  int a, b, c, D, x1, x2;
  printf("Enter value of a, b, c in ax^2+bx+c=0\n");
  printf("a: ");
  scanf("%d", &a);
  printf("b: ");
  scanf("%d", &b);
  printf("c: ");
  scanf("%d", &c);
  printf("You entered: %+dx^2%+dx%+d=0", a, b, c);
  D = b * b - 4 * a * c;
  if (D == 0)
    printf("Common root: %.2f", -b * 1.0 / (2 * a));
  else if (D > 0)
  {
    printf("First Root: %.2f\n", (-b * 1.0 + D) / (2 * a));
    printf("First Root: %.2f", (-b * 1.0 - D) / (2 * a));
  }
  else
  {
    printf("First Root: %.2f%.2+fi", -b * 1.0 / (2 * a), sqrt(-D) / (2 * a));
    printf("Second Root: %.2f%.2+fi", -b * 1.0 / (2 * a), -sqrt(-D) / (2 * a));
  }
  return 0;
}