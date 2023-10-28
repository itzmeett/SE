//Demonstrate to find odd and even numbers from the given array elements.
#include<stdio.h>
void main()
{
	int a[10], i;
	
	for(i=0; i<5; i++)
	{
	printf("Enter the numbers [%d] = ", i);
	scanf("%d", &a[i]);	
	}
	
	printf("Even numbers are : ");
	for(i=0; i<5; i++)
	{	
		if(a[i] % 2 == 0)
		{
			printf("\n%d", a[i]);
		}
	}
	printf("\nOdd numbers are : ");
	for(i=0; i<5; i++)
	{
	
		if(a[i] % 2 == 0)
		{
			printf("\n%d", a[i]);
		}
	}
}
