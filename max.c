#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

static double readInputIfValid(); 
static double max(double a, double b); 
static void waitForKeyPress();

int main() {
    printf("Enter the first number: ");
    fflush(stdout);
    double a = readInputIfValid();

    printf("Enter the second number: ");
    fflush(stdout);
    double b = readInputIfValid();
     
    printf("maximum of %lf and %lf is %lf\n", a, b, max(a, b));
    return 0;
}

static double readInputIfValid() {
    double num = 0;
    if (scanf("%lf", &num) == 0) {
        printf("Invalid number! Exiting ...\n");
        waitForKeyPress();
        exit(-1);
    }
    return num; 
}

static double max(double a, double b) {
    if (a >= b)
        return a;
    return b;
}

static void waitForKeyPress() {
    printf("Press any key to exit \n");
    while (getchar() != '\n')
        ;
        getchar();
}
