#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n % 2 == 0)
        printf("%d is even", n);
    else
        printf("%d is not even", n);
    return 0;
}