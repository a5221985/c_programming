#include <stdint.h>
#include <stdio.h>

int main() {
    uint8_t array[] = {0xFF, 0xFF, 0xFF};

    *(array + 1) = 0xEE;

    printf("0x%hhX\n", *(array));
    printf("0x%hhX\n", *(array + 1));
    printf("0x%hhX\n", *(array + 2));
    return 0;
}
