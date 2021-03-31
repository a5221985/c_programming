#include <stdio.h>

int main() {
    char a = 100;
    printf("Value of a = %c\n", a);
    printf("Address of a = %p\n", &a);
    char* pointer_a = &a;
    char b = *pointer_a;
    printf("Value at b = %c\n", b);
    *pointer_a = 65;
    printf("Value at a = %c\n", a);
    return 0;
}
