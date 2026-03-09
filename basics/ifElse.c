#include <stdio.h>

int main() {
	int age;

	printf("Inform your age: ");
	scanf("%d", &age);

	if (age >= 18) {
		printf("\nYou are allowed to vote.");
	} else {
		printf("You are under the legal age, \nso you\'re not allowed to vote.");
	}
}
