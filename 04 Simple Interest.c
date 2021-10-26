#include <stdio.h>

int main() {
    float p, r, t;

    printf("Enter values:\n");
    printf("\tPrinciple: ");
    scanf("%f", &p);
    printf("\tRate: ");
    scanf("%f", &r);
    printf("\tTime: ");
    scanf("%f", &t);

    float si = p * r * t / 100;

    printf("Simple Interest: %.2f", si);
}