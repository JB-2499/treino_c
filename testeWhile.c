#include <stdio.h>

int main() {
	char stop[3];

	while (1) {
		printf("Do you want to keep on? (y/n)");
		fgets(stop, sizeof(stop), stdin); 

		if (stop[0] == 'n' || stop[0] == 'N') {
			break;
		}
	}

	return 0;	
}
