// WAP in C to implement basic string operations (concatenation, length etc.)

#include <stdio.h>
#include <string.h>

int main()
{
  char str[100], str2[100];
  printf("Enter a string: ");
  gets(str);
  printf("You entered: ");
  puts(str);
  printf("Length: %d\n", strlen(str));
  printf("Reverse: ");
  strrev(str);
  puts(str);
  printf("Copy str => str2\n");
  strcpy(str2, str);
  printf("str: ");
  puts(str);
  printf("str2: ");
  puts(str2);
  printf("join str and str2: ");
  puts(strcat(str, str2));
  return 0;
}