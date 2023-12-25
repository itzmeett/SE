//Demonstrate to make sum of array element
#include<stdio.h>
void main()
{
	int a[10], i, sum = 0;
	
	for(i=0; i<5; i++)
	{
		printf("Insert the value [%d]: ", i);
		scanf("%d", &a[i]);
	}
	printf("\n\n_____________________________________________________\n");
	
	for(i=0; i<5; i++)
	{
		printf("\nDisplay the value [%d]: %d", i, a[i]);
	}
	
	for(i=0; i<5; i++)
	{
		sum += a[i];
	}
	printf("\n\n_____________________________________________________\n");
	printf("\n\nSum of array is = %d", sum);
	
	
	
}
