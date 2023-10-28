#include<stdio.h>
main()
{
	int n;
	printf("\n\n\t Insert the value of number for check it is divisiable by 5 or 3 : ");
	scanf("%d",&n);
	
	if (n%5==0)
	{
		if(n%3==0)
			printf("\n\n\t The number is divisible by 5 & 3 ");
		else 
		    printf("\n\n\t The number is not divisible by 5 & 3 ");
	}
	else
		printf("\n\n\t  The number is not valid ");
}
