#include <stdio.h>

int main()
{
	int number1 ;
	int number2 ;
	
	int total;
	
	printf("please enter the first number ");
	scanf("%d", & number1);
	
	printf("please enter the second number ");
	scanf("%d", & number2);
	
	printf("the entred number is %d \n", number1);
	printf("the entred number is %d \n", number2);
	
	total = number1 + number2;
	
	printf("the result is %d", total);
}
