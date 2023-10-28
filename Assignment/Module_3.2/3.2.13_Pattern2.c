//Pattern - 2
#include<stdio.h>
main()
{
	int i,j, asci=65;
	
	for(i=1; i<=5; i++)
	{
		for(j=1; j<=i; j++)
		{
			printf(" %c ", asci);
			asci++;	
		}	
		printf("\n");
	}	
}
