#include<stdio.h>
int main()
{
	//Q6.Scan temperature from user in celsius.Convert it in fahrenheit
	
	float temp;
	printf("\nEnter the temperature in celcuis to convert in fahrenheit=");
	scanf("%f",&temp);
	
	printf("\nThe given celcius - %f temperature in fahrenheit = %f",temp,(temp*9/5)+32.0);
	
	return 0;
}
