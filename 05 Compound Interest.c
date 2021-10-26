#include <math.h>
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

    float ci = p * pow((1 + r / 100), t) - p;

    printf("Compound Interest: %.2f", ci);
}