/* Write a program which prints the number of days in a month according to given number of month by using switch statement */

#include <stdio.h>

int main(){
	int month;
	
	printf("Enter the number of the month: ");
	scanf("%d", &month);
	
	switch(month){
		case 1:
			printf("31");
			break;
		case 2:
			printf("28");
			break;
		case 3:
			printf("31");
			break;
		case 4:
			printf("30");
			break;
		case 5:
			printf("31");
			break;
		case 6:
			printf("30");
			break;
		case 7:
			printf("31");
			break;
		case 8:
			printf("31");
			break;
		case 9:
			printf("30");
			break;
		case 10:
			printf("31");
			break;
		case 11:
			printf("30");
			break;
		case 12:
			printf("31");
			break;
		default:
			printf("Please enter a valid value");
	}
}
