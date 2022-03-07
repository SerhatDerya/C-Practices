/* Create a simple calculator by using switch statement */

#include <stdio.h>

int main(){
	int number1, number2, result;
	char opr;
	
	printf("Enter the first value: ");
	scanf("%d", &number1);
	
	printf("Enter the second value: ");
	scanf("%d", &number2);
	
	printf("Please choose the operation: ");
	scanf(" %c", &opr);
	
	
	switch(opr){
		case'+':
			result = number1 + number2;
			printf("The result is %d", result);
			break;
			
		case'*':
			result = number1 * number2;
			printf("The result is %d", result);
			break;
			
		case'-':
			result = number1 - number2;
			printf("The result is %d", result);
			break;
			
		case'/':
			result = number1 / number2;
			printf("The result is %d", result);
			break;
			
		default:
			printf("Error");
			
	}
}
