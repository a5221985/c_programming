#include <stdio.h>
#include <stdint.h>

int32_t add(int32_t a, int32_t b);
int32_t sub(int32_t a, int32_t b);
int64_t mul(int32_t a, int32_t b);
int32_t div(int32_t a, int32_t b);

int main() {
    int32_t a = 10;
    int32_t b = 15;
    int32_t c = 3;
    int32_t sum = add(a, b);
    printf("%d + %d = %d\n", a, b, sum);
    int32_t diff = sub(a, b);
    printf("%d - %d = %d\n", a, b, diff);
    int64_t prod = mul(a, b);
    printf("%d x %d = %lld\n", a, b, prod);
    int32_t quotient = div(a, c);
    printf("%d / %d = %d\n", a, c, quotient);
}

int32_t add(int32_t a, int32_t b) {
    int32_t sum = 0;
    __asm volatile ("mov %0, %%eax"::"r"(a));
    __asm volatile ("add %0, %%eax"::"r"(b));
    __asm volatile ("mov %%eax, %0":"=r"(sum));
    return sum;
}

int32_t sub(int32_t a, int32_t b) {
    int32_t diff = 0;
    __asm volatile ("mov %0, %%eax"::"r"(a));
    __asm volatile ("sub %0, %%eax"::"r"(b));
    __asm volatile ("mov %%eax, %0":"=r"(diff));
    return diff;
}

int64_t mul(int32_t a, int32_t b) {
    int64_t prod = 0;
    __asm volatile ("mov %0, %%eax"::"r"(a));
    __asm volatile ("imull %0"::"r"(b));
    __asm volatile ("mov %%rax, %0":"=r"(prod));
    return prod; 
}

int32_t div(int32_t a, int32_t b) {
    int32_t quotient = 0;
    __asm volatile ("mov %0, %%eax"::"r"(a));
    __asm volatile ("cdq"); // extend double word to quad word (EAX into EDX:EAX)
    __asm volatile ("idivl %0"::"r"(b));
    __asm volatile ("mov %%eax, %0":"=r"(quotient));
    return quotient;
}
