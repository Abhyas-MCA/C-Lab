#include <stdio.h>

int main() {
    int n, input, sum = 0;

    printf("How many numbers do you want to add?\n> ");
    scanf("%d", &n);

    printf("Enter %d numbers:\n", n);
    for (int i = 1; i <= n; i++) {
        printf("%d: ", i);
        scanf("%d", &input);

        sum += input;
    }

    printf("\nSum: %d\n", sum);

    return 0;
}