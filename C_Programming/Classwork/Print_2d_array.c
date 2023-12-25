#include<stdio.h>
main()
{
	int i,j, a[4][4] = {12,14,16,18,20,22,24,26,28,30,32,34,36,38,40,42};
	
	for(i=0; i<4; i++)
	{
		for(j=0; j<4; j++)
		{
			printf(" %d ", a[i][j]);
		}
		printf("\n");
	}
	
}
