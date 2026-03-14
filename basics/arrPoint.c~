#include <stdio.h>

int main(void) {
	int i = 5;
	int numbers[i];
	int* point;

	for (int j = 0; j < i; j++) {
		*(numbers + j) = j+1;

		printf("The number of position \"%d\" in the array is ", j + 1);
		printf("\nstored in memory in the \"%p\" adress of memory.\n\n", (void*)(numbers + j));
	}

	printf("\nType the memory adress to be acessed: ");
	scanf("%p", (void**)&point);

	printf("\n%d", *point);

	return 0;
}
