#include <stdio.h>

int main() {
    int a = 10;
    int b = 3;

    printf("\nBefore swapping\n");
    printf("a: %d and b: %d", a, b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("\nAfter swapping\n");
    printf("a: %d and b: %d", a, b);

    return 0;
}
