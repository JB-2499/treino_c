#include <stdio.h>

int main(void) {
	int age = 1;
	int* ageAd = &age;

	int id = 116;
	int* idAd = &id;

	printf("The adress in memory that the ");
	printf("\nvariable \"age\" is stored is: %p.", ageAd);

	printf("\nThe adress in memory that the ");
	printf("\nvariable \"id\" is stored in is: %p.", idAd);

	return 0;
}
