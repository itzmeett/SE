#include<stdio.h>
main()
{
	int n;
	printf("\n\n\t input the value of n : ");
	scanf("%d",&n);
	if(n>=0)
	{
		if(n==0)
			printf("\n\n\t number is zero...");
		else
		    printf("\n\n\t number is positive...");
	}
	else
	{
		printf("\n\n\t number is nagative...");
	}
}
