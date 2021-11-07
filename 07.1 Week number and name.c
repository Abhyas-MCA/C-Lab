#include <stdio.h>
int main()
{
    int n;
    char weekName[7][10] = {
        "Monday",
        "Tuesday",
        "Wednesday",
        "Thursday",
        "Friday",
        "Saturday",
        "Sunday"};

    printf("Enter a week number: ");
    scanf("%d", &n);

    if (n >= 1 && n <= 7)
        printf("%d is %s", n, weekName[n - 1]);
    else
        printf("%d is not a week number.", n);
}