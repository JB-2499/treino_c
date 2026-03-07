#include <stdio.h>
#include <stdbool.h>

int main() {
	int day;
	
	printf("Type a number representing a day of the week: ");
	scanf("%d", &day);

		switch (day) {
		case 1:
			printf("Call it Stormy monday.");
			break;
		case 2:
			printf("Twesday is just as bad.");
			break;
		case 3:
			printf("Wednesday is worse.");
			break;
		case 4:
			printf("Thursday is also sad.");
			break;
		case 5:
			printf("The eagle flies on Friday yeah.");
			break;
		case 6:
			printf("Saturday i go out to play.");
			break;
		case 7:
			printf("Sunday i go to church, and kneel down to pray.");
			break;
		default:
			printf("Our lord and savior only created 7 days on the week,\nnone more, none less.");
	}
		
	return 0;
}
