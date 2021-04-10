#include <stdio.h>

int main() {
    int32_t a = 5;
    a = 0 ? (a < 9) : a++;
    printf("a = %u\n", a);
    return 0;
}
