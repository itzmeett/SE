//Demonstrate to get and print the array elements.
#include<stdio.h>
void main()
{
	int arr[10], i;
	
	printf("Inserting Array :\n\n");
	for(i=0; i<5; i++)
	{
		printf("Enter the array of [%d] = ", i);
		scanf("%d", &arr[i]);
	}
	printf("_________________________________________________________\n");
	printf("\nDisplaying Array : \n");
	
	for(i=0; i<5; i++)
	{
		printf("\n[%d] = %d", i, arr[i]);
	}
}
