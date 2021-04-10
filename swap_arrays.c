#include <stdio.h>
#include <stdint.h>

void printString(char const *const string);
void printArray(uint32_t const *const array, uint32_t const size);
void readArrayElements(uint32_t *const array, uint32_t const size);
void swap(uint32_t *const array_1, uint32_t *const array_2, uint32_t const size);

int main() {
	printString("Enter the size of the arrays to swap: ");
	uint32_t size = 0;
	scanf("%u", &size);
	
	printString("Enter the elements of the first array separated by spaces: ");
	uint32_t array_1[size];
	readArrayElements(array_1, size);
	
	printString("Enter the elements of the second array separated by spaces: ");
	uint32_t array_2[size];
	readArrayElements(array_2, size);
	
	printString("contents of first array are: ");
	printArray(array_1, size);
	
	printString("contents of second array are: ");
	printArray(array_2, size);
	
	swap(array_1, array_2, size);
	
	printString("contents of first array after swapping are: ");
	printArray(array_1, size);
	
	printString("contents of second array after swapping are: ");
	printArray(array_2, size);
	
	return 0;
}

void printString(char const *const string) {
	printf("%s", string);
	fflush(stdout);
}

void printArray(uint32_t const *const array, uint32_t const size) {
	for (int i = 0; i < size; i++)
		printf("%u ", array[i]);
	printf("\n");
}

void readArrayElements(uint32_t *const array, uint32_t const size) {
	for (int i = 0; i < size; i++)
		scanf("%u", &array[i]);
}

void swap(uint32_t *const array_1, uint32_t *const array_2, uint32_t const size) {
	uint32_t temp = 0;
	for (int i = 0; i < size; i++) {
		temp = array_1[i];
		array_1[i] = array_2[i];
		array_2[i] = temp;
	}
}
