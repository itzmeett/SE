#include<stdio.h>
main()
{
	int mtr1[3][3], mtr2[3][3], mtr3[3][3], i, j, k;
	
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("\nEnter mtr1[%d][%d] = ", i,j);
			scanf("%d", &mtr1[i][j]);
		}
	}
	
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("\nEnter mtr2[%d][%d] = ", i,j);
			scanf("%d", &mtr2[i][j]);
		}
	}
	
	
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			mtr3[i][j] = 0;
			for(k=0; k<3; k++)
			{
				mtr3[i][j] = mtr3[i][j] + mtr1[i][k] * mtr2[k][j];
			}
		}
	}
	
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			printf(" %d ", mtr3[i][j]);
		}
		printf("\n");
	}	
}
