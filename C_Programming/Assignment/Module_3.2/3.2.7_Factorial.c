//WAP to print factorial of given number
#include<stdio.h>
main()
{
	int i, n, fact = 1;
	
	printf("\nEnter the number which you wanna factorial : ");
	scanf("%d", &n);
	
	if(n<0)
	{
		printf("\nNegative number's factroial are not exist.'");
	}
	else
	{
		for(i=1; i<=n; ++i)
	 	{
		fact *= i;
	 	}
	 	
		printf("Factorial of %d is = %d", n, fact);
	}	
}
