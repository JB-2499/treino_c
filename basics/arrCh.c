#include <stdio.h>

int main (void) {
	int numbers[3][3];
	int i, j;

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			numbers[i][j] = (i*3) + j + 1;
			printf("%d", numbers[i][j]);
		}

		printf("\n");
	}

	return 0;
}
