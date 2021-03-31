#include <stdio.h>

int main() {
    printf("Size of char data type = %lu\n", sizeof(char));
    printf("Size of short data type = %lu\n", sizeof(short));
    printf("Size of int data type = %lu\n", sizeof(int));
    printf("Size of long data type = %lu\n", sizeof(long));
    printf("Size of long long data type = %lu\n", sizeof(long long));

    int a[10];
    printf("Size of int[] data type = %lu\n", sizeof(a));
    unsigned long size = sizeof(a) / sizeof(int);
    printf("Number of elements in array = %lu\n", size);
}
