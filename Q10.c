#include<stdio.h>
int main()
{
	//Q10.Scan length and width of rectangle from user.Print area and perimeter of a rectangle.
	
	int l,w;
	
	printf("\nEnter length of the rectangle=");
	scanf("%d",&l);
	
	printf("\nEnter width of the rectangle=");
	scanf("%d",&w);
	
	printf("\nThe area of the rectangle of l-%d and w-%d is = %d",l,w,l*w);
	
	printf("\nThe perimeter of the rectangle of l-%d and w-%d is = %d",l,w,2(l*w));
	
	return 0;
}
