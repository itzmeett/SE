#include<stdio.h>
main()
{
	int arr[5][3], i, j;
	
	for(i=0; i<5; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("Enter input [%d] [%d] : ",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	
	printf("\n\nOutput 2D array : \n");
	
	for(i=0; i<5; i++)
	{
			for(j=0; j<3; j++)
			{		
				printf(" %d ",arr[i][j] );
			}
			printf("\n");
	}
}
