#include <stdio.h>

int main() {
    int a;
    int b;
    int c;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    printf("Enter third number: ");
    scanf("%d", &c);
    double average = (a + b + c) / 3.0;
    printf("Average of %d, %d and %d is: %0.14lf\n", a, b, c, average);
    return 0;
}
