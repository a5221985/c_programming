#include <stdio.h>
#include <stdint.h>

struct DataSet {
    char data1;
    int data2;
    char data3;
    short data4;
}__attribute__((packed));

int main() {
    struct DataSet data;
    data.data1 = 0x11;
    data.data2 = 0xFFFFEEEE;
    data.data3 = 0x22;
    data.data4 = 0xABCD;

    uint8_t *ptr;
    ptr = (uint8_t*) &data;
    uint32_t totalSize = sizeof(struct DataSet);

    for (int i = 0; i < totalSize; i++) {
        printf("%p: %X\n", ptr, *ptr);
        ptr++;
    }

    printf("Sizeof of struct data is %lu\n", sizeof(struct DataSet));

    return 0;
}
