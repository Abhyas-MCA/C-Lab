#include <stdio.h>
int main()
{
    int i, length = 0, isPanindrome = 1;
    char word[10];
    printf("Enter a word: ");
    scanf("%s", word);

    i = 0;
    while (word[i] != '\0')
        i++;
    length = i;

    for (i = 0; i <= length / 2; i++)
        if (word[i] != word[length - 1 - i])
        {
            isPanindrome = 0;
            break;
        }

    if (isPanindrome == 1)
        printf("%s is a palindrome.", word);
    else
        printf("%s is not a palindrome.", word);

    return 0;
}