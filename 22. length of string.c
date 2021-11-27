// WAP in C to count number of characters in a string

#include <stdio.h>

int main()
{
  int i = 0;
  char string[50];

  printf("Enter a string: ");
  gets(string);

  while (string[i] != '\0')
    i++;

  printf("Length of string: %d", i);
}