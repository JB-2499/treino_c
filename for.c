#include <stdio.h>

int main() {
	int i, j;

	printf("In wich number should the table end? ");
	scanf("%d", &i);

	printf("And to wich number should the iterations be multiplied by? ");
	scanf("%d", &j);

	for (int k = 1; k <= i; k++) {
		for (int l = 1; l <= j; l++) {
			printf("%d ", l); 
		}
		printf("\n");
	}
}
