#include <stdio.h>


void adress(int* point) {
	printf("The int value \"%d\" is stored at: \"%p\".\n", *point, (void*)point);
}

void modAd(int* point) {
	printf("\nType an int to be returned: ");
	scanf(" %d", point);
}

int readInt() {
	int num;

	printf("\nType an int to be returned: ");
	scanf(" %d", &num);

	return num;
}

int main(void) {
	int num = readInt();
	adress(&num);

	modAd(&num);
	adress(&num);
	
	return 0;
}
