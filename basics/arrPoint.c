#include <stdio.h>

int main(void) {
	int i = 5;
	int a;
	int numbers[i];
	int* point;
	int stop = 1, stop2  = 0;

	while (stop > 0) {
		for (int j = 0; j < i; j++) {
			*(numbers + j) = j+1;
	
			printf("The number of position \"%d\" in the array is ", j + 1);
			printf("\nstored in memory in the \"%p\" adress of memory.\n\n", (void*)(numbers + j));
		}

		while (stop2 < 1) {
			printf("\nType the memory adress to be acessed: ");
			scanf(" %p", (void**)&point);
	
			printf("\n%d", *point);
	
			printf("\n\nNow, type a new value to be stored in that same adress: ");
			scanf(" %d", &a);
		
			*point = a;
			
			printf("\n\nNow the value stored in the adress \"%p\" is: %d", (void*)(point), *point);
			
			printf("\n\nDo you want to acess another adress? (0/1)");
			scanf(" %d", &stop2);
		}

		printf("\nDo you want to keep on? (0/1)");
		scanf(" %d", &stop);
	}

	for (int num = 0; num < sizeof(numbers) / 4; num ++) {
		printf("%d, ", numbers[num]);
	}

	return 0;
}
