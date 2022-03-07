/* Write a program which prints the day of week according to given day number by using switch statement */

#include <stdio.h>

int main(){
	int dayNo;
	
	printf("Enter the number of day: ");
	scanf("%d", &dayNo);
	
	switch(dayNo) {
		case 1:
			printf("Monday");
			break;
		case 2:
			printf("Tuesday");
			break;
		case 3:
			printf("Wednesday");
			break;
		case 4:
			printf("Thursday");
			break;
		case 5:
			printf("Friday");
			break;
		case 6:
			printf("Saturday");
			break;
		case 7:
			printf("Sunday");
			break;
		default:
			printf("Please enter a valid value!");
	}
}
