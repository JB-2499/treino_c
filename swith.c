#include <stdio.h>

int main() {
	int number;

	printf("Type a number: ");
	scanf("%d", number);

	switch (number):
		case 1:
			printf("You chose 1.");
			break;
		case 2:
			printf("You chose 2.");
			break;
		default:
			printf("The number you chose doesn't do anything.");

	return 0;
}
