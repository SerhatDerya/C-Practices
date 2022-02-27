#include <stdio.h>

int main()
{
	int x, y, result;
	
	printf("Enter the first number:");
	scanf("%d", &x);
	
	printf("Enter the second number:");
	scanf("%d", &y);
	
	result = x * y;
	
	printf("The result is = %d", result);
	
	return 0;
}
