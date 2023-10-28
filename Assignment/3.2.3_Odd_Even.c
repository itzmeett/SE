//WAP to find number is even or odd using ternary operator 
#include<stdio.h>
main()
{
	int n;
	
	printf("Enter a Number = ");
	scanf("%d", &n);
	
	(n % 2 == 0) ? printf("\n%d is a Even number", n) : printf("\n%d is Odd number", n);
	
}
