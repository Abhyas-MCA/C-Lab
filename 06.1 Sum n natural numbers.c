#include <stdio.h>
int main()
{
    int n, sum;
    printf("Enter n: ");
    scanf("%d", &n);
    sum = n * (n + 1) / 2;
    printf("Sum of natural number upto %d = %d", n, sum);
    return 0;
}  