#include<stdio.h>
main()
{
	int a ,b;
	printf("\n\n Enter the value of a :");
	scanf("%d",&a);
	printf("\n\n Enter the value of b :");
	scanf("%d",&b);
	
	printf("\n\n Addition of a and b is %d",a+=b);
	printf("\n\n Subtraction of a and b is %d",a-=b);
	printf("\n\n Multiplication of a and b is %d",a*=b);
	printf("\n\n Division of a and b is %d",a/=b);
}
