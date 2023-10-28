//Write a program to find out the max number from given array using function
#include<stdio.h>
main()
{
	int arr[20], i, j, size, n, sum = 0;
	
	printf("Enter the size of array : ");
	scanf("%d", &size);
	printf("\n");
	
	for(i=0; i<size; i++)
	{
	printf("Enter element %d : ", i+1);
	scanf("%d", &n);
		sum += n; 
	}
	printf("\nSum of array element is = %d", sum);
	
}
