#include <stdio.h>

int main() {
	double ages[10];
	double sum = 0;

	float number;

	for (int j = 0; j < sizeof(ages); j++) {
		printf("Digite o %d° número da lista de 10: ", j+1);
		scanf("%f", &number);

		while (getchar() != '\n');

		ages[j] = number;

	}

	int lenght = sizeof(ages) / sizeof(ages[0]);

	for (int i = 0; i < lenght; i++) {
		sum += ages[i];
	}

	double average = sum / lenght;

	printf("Average age amongst the group is: %.2f", average);

	return 0;
}
