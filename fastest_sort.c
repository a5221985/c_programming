#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main() {
    uint32_t nums = (uint32_t) pow(2, 7);
    int32_t a[nums];
    uint32_t size = sizeof(a) / sizeof(a[0]);

    srand(time(0));

    double range = ((double) size / RAND_MAX);
    for (int i = 0; i < size; i++)
        a[i] = (int32_t) (rand() * range);

    for (int i = 0; i < size; i++)
        printf("%d ", a[i]);
    printf("\n\n");

    int32_t frequency[nums];
    for (int i = 0; i < size; i++) {
        frequency[i] = 0;
    }

    for (int i = 0; i < size; i++) {
        frequency[a[i]]++;
    }

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < frequency[i]; j++) {
            printf("%d ", i);
        }
    }
    printf("\n"); 
}
