#include<stdio.h>
main()
{
	int arr1[3][3], arr2[3][3],i, j, add[i][j], sub[i][j], mul[i][j], div[i][j];
	
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
	
	printf("\n\nSum of arr1 + arr2 : \n");
	
	for(i=0; i<3; i++)
	{
			for(j=0; j<3; j++)
			{	
				add[i][j] = arr1[i][j] + arr2[i][j]; 	
				sub[i][j] = arr1[i][j] - arr2[i][j];
				mul[i][j] = arr1[i][j] * arr2[i][j];
				div[i][j] = arr1[i][j] / arr2[i][j];
			}
			printf("\n");
	}
	
	printf("\n\nOutput Of Addition : \n");
	
	for(i=0; i<3; i++)
	{
			for(j=0; j<3; j++)
			{		
				printf(" %d ",add[i][j] );
			}
			printf("\n");
	}
	
	printf("\n\nOutput Of Substraction : \n");
	
	for(i=0; i<3; i++)
	{
			for(j=0; j<3; j++)
			{		
				printf(" %d ",sub[i][j] );
			}
			printf("\n");
	}
	
	printf("\n\nOutput Of Multiplication : \n");
	
	for(i=0; i<3; i++)
	{
			for(j=0; j<3; j++)
			{		
				printf(" %d ",mul[i][j] );
			}
			printf("\n");
	}
	
	printf("\n\nOutput Of Division : \n");
	
	for(i=0; i<3; i++)
	{
			for(j=0; j<3; j++)
			{		
				printf(" %d ",div[i][j] );
			}
			printf("\n");
	}
	
	
	
	
}

