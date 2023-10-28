//WAP to print Fibonacci series up to given numbers
#include<stdio.h>
main()
{
	int a=0, b=1, c, n, i;
	
	printf("Enter the number of elements : ");
	scanf("%d", &n);
	
	printf("\n\n%d, %d, ", a, b);
	
	
	for(i=2; i<n; i++)
	{
		c = a+b;
		printf("%d, ", c);
		a = b;
		b = c;
	}
}
