#include<stdio.h>
int main()
{
	//Q4.Scan marks of three subjects of a student.Print their average.
	
	int sub1,sub2,sub3;
	
	printf("\nEnter marks of subject 1=");
	scanf("%d",&sub1);
	
	printf("\nEnter marks of subject 2=");
	scanf("%d",&sub2);
	
	printf("\nEnter marks of subject 3=");
	scanf("%d",&sub3);
	
	printf("\nThe average of 3 subjects = %f",(sub1+sub2+sub3)/3.0);
	
	return 0;
}
