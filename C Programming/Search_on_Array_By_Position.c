//Demonstrate to search position
#include<stdio.h>
void main()
{
	int i, a[10], pos, flag=0;
	
	for(i=0; i<5; i++)
	{
		printf("Insert the value [%d]: ", i);
		scanf("%d", &a[i]);
	}
	printf("\n\n_____________________________________________________\n");
		
	for(i=0; i<5; i++)
	{
		printf("\nDisplay the value [%d]: %d", i, a[i]);
	}
	
	printf("\n\nEnter position = ");
	scanf("%d", &pos);
	
	
	for(i=0; i<5; i++)
	{
		if(pos == a[i])
		{
			flag = 1;
			break;
		}
	}
	
	if(flag == 1)
	{
		printf("\n %d is exist in [%d] postion", a[i], pos);
	}
	
	
	
}
