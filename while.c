#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "");

	int i = 1;
	int limit;

	printf("Until wich number should the counter go? ");
	scanf("%d", &limit);

	while (i <= limit) {
		printf("The value of i is: %d.\n", i);
		i++;
	}

	printf("\nThe value of i reached the defined limit of %d.", limit);

	return 0;
}
