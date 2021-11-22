// WAP in C to check whether a character is vowel or not.

#include <stdio.h>

int main()
{
  char ch;
  printf("Enter a character: ");
  scanf("%c", &ch);
  switch (ch)
  {
  case 'A':
  case 'E':
  case 'I':
  case 'O':
  case 'U':
  case 'a':
  case 'e':
  case 'i':
  case 'o':
  case 'u':
    printf("%c is vowel", ch);
    break;
  default:
    printf("%c is not vowel", ch);
  }
  return 0;
}