#include <stdio.h>

int main() {
	char stop[3]; 
	int n1, n2;

	while (1) {
		printf("Type in two numbers, wich will be added together.\n");
		
		printf("Number 1: ");
		scanf("%d", &n1);	

		while (getchar() != '\n');
		
		printf("Number 2: ");
		scanf("%d", &n2);

		while (getchar() != '\n');

		printf("\nThe sum of n1 and n2 equals to: %d.", n1 + n2);

		printf("\nDo you want to keep on? (y/n)");
		fgets(stop, sizeof(stop), stdin);
		
		if (stop[0] == 'n' || stop[0] == 'N') {
			break;
		}

		printf("\n");
	}

	return 0;	
}
