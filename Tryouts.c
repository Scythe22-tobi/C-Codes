#include<stdio.h>
struct Number
{
	int x,y;
};
struct Number getnum();
struct Number addition (struct Number num1,struct Number num2);
int main()
{
	struct Number num1,num2;
	
	num1=getnum();
	num2=getnum();
	
	struct Number add;
	
	add = addition(num1,num2);
	
	printf("\nthe addition of x=%d,\nThe addition of y=%d",add.x,add.y);
	
	
}
struct Number getnum()
{
	struct Number num;
	printf("\nEnter x and y integers = ");
	scanf("%d%d",&num.x,&num.y);
	
	return num;
}
struct Number addition (struct Number num1,struct Number num2)
{
	struct Number add;
	add.x=num1.x+num2.y;
	add.y=num1.y+num2.y;
	
	return add;
}
