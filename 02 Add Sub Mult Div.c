#include <stdio.h>

int main() {
    double n1, n2;
    printf("Enter first number: ");
    scanf("%lf", &n1);
    printf("Enter second number: ");
    scanf("%lf", &n2);

    while (1) {
        int choice;
        printf("\n\nMENU\n");
        printf("1. Add\n");
        printf("2. Subtract\n");
        printf("3. Multiply\n");
        printf("4. Divide\n");
        printf("5. Change number\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("\n%.2lf + %.2lf = %.2lf\n", n1, n2, n1 + n2);
                break;
            case 2:
                printf("\n%.2lf - %.2lf = %.2lf\n", n1, n2, n1 - n2);
                break;
            case 3:
                printf("\n%.2lf x %.2lf = %.2lf\n", n1, n2, n1 * n2);
                break;
            case 4:
                if (n2 != 0)
                    printf("\n%.2lf / %.2lf = %.2lf", n1, n2, n1 / n2);
                else
                    printf("\nCannot divide by 0\n");
                break;
            case 5:
                printf("\nEnter first number: ");
                scanf("%lf", &n1);
                printf("Enter second number: ");
                scanf("%lf", &n2);
                break;
            case 6:
                return 0;
            default:
                printf("\nINVALID INPUT!\n");
        }
    }

    return 0;
}