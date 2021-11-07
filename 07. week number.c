#include <stdio.h>

int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    if (n >= 1 && n <= 7)
        printf("%d is a week number", n);
    else
        printf("%d is not a week number", n);
    return 0;
}
