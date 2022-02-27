#include <stdio.h>

int main()
{
	int a=21;
	int b=10;
	int c = a+b;
	printf("Line1-value of c is %d\n",c);
	c = a-b;
	printf("Line2-value of c is %d\n",c);
	c = a*b;
	printf("Line3-value of c is %d\n",c);
	c = a/b;
	printf("Line4-value of c is %d\n",c);
	c = a%b;
	printf("Line5-value of c is %d\n",c);
	c = a++;
	printf("Line6-value of c is %d\n",c);
	c = a--;
	printf("Line7-value of c is %d\n",c);
}
