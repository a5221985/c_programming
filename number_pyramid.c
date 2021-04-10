#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int main() {
    printf("Enter height of the pyramid: ");
    fflush(stdout);

    double input = 0.0;
    scanf("%lf", &input);

    uint32_t height = (uint32_t) input;
    if (input <= 0 || (((double) height) != input)) {
        printf("Invalid input! positive integer in the range [0, 4294967295] expected. Exiting...\n");
        exit(-1);
    }

    for (uint32_t i = 1; i <= height; i++) {
        for (uint32_t j = i; j > 0; j--) {
            printf("%u\t", j);
        }
        printf("\n");
    }
    return 0;
}
