#include<stdio.h>
main()
{
	int b, h, area;
	
	printf("\n\n input the value for base : ");
	scanf("%d",&b);
	
	printf("\n\n input the value of height : ");
	scanf("%d",&h);
	
	area=0.5*(b*h);
	
	printf("\n\n\t area of triangle : %d",area);
}
