#include<stdio.h>
main()
{
	int i,j,k; 
	int arr[3][3][3];
	
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			for(k=0; k<3; k++)
			{
				printf("Enter element of : [%d][%d][%d] = ", i,j,k);
				scanf("%d", &arr[i][j][k]);
		    }
		}
		printf("\n");
	}
	
		for(i=0; i<3; i++)
		{
			for(j=0; j<3; j++)
			{
				for(k=0; k<3; k++)
				{
				printf("\n  Display element of : [%d][%d][%d] = %d ", i,j,k, arr[i][j][k]);
		    	}
			}
			printf("\n");
		}
}
