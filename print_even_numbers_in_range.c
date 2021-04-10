#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int main() {
    int32_t start_num = 0;
    int32_t end_num = 0;
    printf("Enter start and end numbers (give space between the two numbers): ");
    fflush(stdout);
    scanf("%d %d", &start_num, &end_num);

    if (start_num > end_num) {
        printf("start num must be less than or equal to the end num! Exiting...\n");
        exit(-1);
    }

    int32_t i = (start_num % 2 == 0) ? start_num : start_num + 1;
    uint32_t count = 0;

    while (i <= end_num) {
        printf("%d\n", i);
        i += 2;
        count++;
    }

    printf("\nNo of even numbers = %u\n", count);

    return 0;
}
