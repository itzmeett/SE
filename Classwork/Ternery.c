#include<stdio.h>
main()
{
	int x,y,z;
	printf("\n\n\t Input number 1 :");
	scanf("%d",&x);
	printf("\n\n\t input number2 :");
	scanf("%d",&y);
	
	z=x>y?x:y;
	
	printf("\n\n\t the bigger number is : %d",z);
}
