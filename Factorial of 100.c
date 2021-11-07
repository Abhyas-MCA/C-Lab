#include <stdio.h>

int multiply(int res[], int x, int res_size);

int main()
{
    int n, i, res_size;
    int res[200];

    res[0] = 1;
    res_size = 1;

    printf("Enter n: ");
    scanf("%d", n);

    for (i = 2; i <= n; i++)
        res_size = multiply(res, i, res_size);

    printf("Factorial of %d is ");
    for (i = 0; i < res_size; i++)
        printf("%d", res[i]);
}

int multiply(int res[], int x, int res_size)
{
    int i;
    int carry = 0;
    for (i = 0; i < res_size; i++)
    {
        int prod = res[i] * x + carry;
        res[i] = prod % 10;
        carry = prod / 10;
    }
    while (carry)
    {
        res[res_size] = carry % 10;
        carry /= 10;
        res_size++;
    }

    return res_size;
}