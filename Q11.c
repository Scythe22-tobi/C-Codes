#include<stdio.h>
int main()
{
	//Q11.Scan 2 numbers from user and print their 4 arithmetic operations.
	
	int num1,num2;
	
	printf("\nEnter 2 integers=");
	scanf("%d%d",&num1,&num2);
	
	printf("\nThe addition of two numbers = %d",num1+num2);
	printf("\nThe subtraction of the two numbers = %d",num1-num2);
	printf("\nThe division of two numbers = %d",num1/num2);
	printf("\nThe multiplaction of the two numbers = %d",num1*num2);
	
	return 0;
}
