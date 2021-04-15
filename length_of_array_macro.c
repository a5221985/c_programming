#include <stdio.h>
#include <stdint.h>

#define SIZE_OF_ARRAY(array) ((sizeof(array)) / (sizeof(array[0])))

int main() {
    uint32_t array[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    printf("size of array: %lu\n", SIZE_OF_ARRAY(array));
    return 0;
}
