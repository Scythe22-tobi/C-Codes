#include<stdio.h>
int main()
{
	//Q7.Scan radius from user and print its area and circumference.
	
	float r;
	printf("\nEnter the radius =");
	scanf("%f",&r);
	
	printf("\nThe area of the circle of r-%f = %f \n The circumference of the circle of r-%f = %f",r,r*3.14*r,r,2*3.14*r);
	
	return 0;
}
