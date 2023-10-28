#include<stdio.h>
main()
{
	int arr[5], i, j, temp;
	for(i=0; i<5; i++)
	{
	printf("\nEnter array of %d = ",i);
	scanf("%d", &arr[i]);
	}
	printf("\Display  %d = ",i);
	scanf("%d", &arr[i]);
	
		for(i=0; i<5; i++)
	{
		for(j=i+1; j<5; j++)
		if(arr[i] > arr[j])
			{
				temp = arr[i];
				arr [i] = arr[j];
				arr[j] = temp;
					
			}
			
			printf("\nthe second highest number is %d", arr[3]);
}
}
