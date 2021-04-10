#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

static uint32_t readInputIfValid();
static void waitForKeyPress();

int main() {
	printf("Enter first number: ");
	fflush(stdout);	
	uint32_t num1 = readInputIfValid();
	
	printf("Enter second number: ");
	fflush(stdout);
	uint32_t num2 = readInputIfValid();
	
	printf("%u & %u = %u\n", num1, num2, (num1 & num2));
	printf("%u | %u = %u\n", num1, num2, (num1 | num2));
	printf("%u ^ %u = %u\n", num1, num2, (num1 ^ num2));
	printf("~%u = %u\n", num1, (~num1));
	
	waitForKeyPress();
	
	return 0;
}

static uint32_t readInputIfValid() {
	float num = 0.0f;
	if (scanf("%f", &num) == 0) {
		printf("Invalid input! Exiting");
		waitForKeyPress();
		exit(-1);
	}
	return (uint32_t) num;
}

static void waitForKeyPress() {
        printf("Press any key to exit ");
	while (getchar() != '\n')
		;
	getchar();
}
