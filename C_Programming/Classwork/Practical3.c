// Write a C program to enter a number from the user and make sum of the digits of the given number.
#include<stdio.h>
void main()
{
	int a[20], size, i, sum=0;
	
	printf("\n Enter the size of array : ");
	scanf("%d", &size);
	
	for(i=0; i<size; i++)
	{
		printf("\nEnter the value of number %d = ", i+1);
		scanf("%d", &a[i]);
	}
	
	printf("\n\n______________________________________________\n");
	printf("\nDisplay the input value : ");
	
	
	for(i=0; i<size; i++)
	{
		printf("\nNumber %d = %d", i+1, a[i]);
	}
	
	
	for(i=0; i<size; i++)
	{
		sum += a[i];
	}
	
	printf("\nSum of all inputs number are : %d", sum);
	
}
