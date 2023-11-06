#include<stdio.h>
main()
{
	int i,j,k; 
	int arr[3][2][2] = {{{1,2}, {3,4}},
	{{5,6}, {7,8}},
	{{9,1}, {2,3}}};
	
	for(i=0; i<3; i++)
	{
		for(j=0; j<2; j++)
		{
			for(k=0; k<2; k++)
			{
				printf("\n  Element : [%d][%d][%d] = %d", i,j,k, arr[i][j][k]);
			}
		}
		printf("\n");
	}
}
