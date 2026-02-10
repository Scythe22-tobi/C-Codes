#include<stdio.h>
int main()
{
	//Q8.Scan 4 digit number from user.Print each of its digit separately.
	
	int num;
	printf("\nEnter a 4 digits integer =");
	scanf("%d",&num);
	int rem,i;
	i=0;
	while(num>0)
	{
		rem=num%10;
		printf("\n%d\n",rem);
		num=num/10;
		i++;
	}
	
	return 0;
}
