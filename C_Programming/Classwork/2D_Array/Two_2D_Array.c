#include<stdio.h>
main()
{
	int arr1[3][3], arr2[3][3],i, j;
	
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("First Array [%d] [%d] : ",i,j);
			scanf("%d",&arr1[i][j]);
		}
	}
	
	printf("\n\nOutput Of First Array : \n");
	
	for(i=0; i<3; i++)
	{
			for(j=0; j<3; j++)
			{		
				printf(" %d ",arr1[i][j] );
			}
			printf("\n");
	}
	printf("\n");
	
	// For second 2d array
	
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("Second Array [%d] [%d] : ",i,j);
			scanf("%d",&arr2[i][j]);
		}
	}
	
	printf("\n\nOutput Of Second Array : \n");
	
	for(i=0; i<3; i++)
	{
			for(j=0; j<3; j++)
			{		
				printf(" %d ",arr2[i][j] );
			}
			printf("\n");
	}
}

