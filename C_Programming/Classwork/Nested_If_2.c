#include<stdio.h>
main()
{
	int num;
	
	printf("\n\n\t Input number");
	scanf("%d",&num);
	
	if(num>0)
		printf("\n\n The entered number is positive number..: ");
	
	else if(num<0)
		printf("\n\n The entere numer is negative number..: ");
	
	else
		printf("\n\n The entered number is zero..: ");
			
}
