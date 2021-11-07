// WAP in C to find the greatest of three inputted numbers using ternary opearator

#include <stdio.h>

int main()
{
    int n1, n2, n3, largest;
    printf("Enter 3 numbers:\n");
    scanf("%d%d%d", &n1, &n2, &n3);

    largest = (n1 > n2 && n2 > n3) ? n1 : (n2 > n3) ? n2
                                                    : n3;

    printf("%d is the largest.", largest);
}