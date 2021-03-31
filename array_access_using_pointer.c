#include<stdint.h>
#include<stdio.h>

int main() {
    int32_t a[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    uint32_t size = sizeof(a) / sizeof(int32_t);

    int32_t* pointer_a = &a[0];
    for (uint32_t i = 0; i < size; i++) {
        printf("%d ", *(pointer_a++));
    }
    printf("\n");

    return 0;
}
