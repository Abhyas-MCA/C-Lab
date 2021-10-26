#include <stdio.h>

int main() {
    int a = 10;
    int b = 3;

    printf("\nBefore swap\n");
    printf("a: %d and b: %d", a, b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("\nAfter swap\n");
    printf("a: %d and b: %d", a, b);

    return 0;
}
