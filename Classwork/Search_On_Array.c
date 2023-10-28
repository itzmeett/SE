//Demonstrate to search the element
#include<stdio.h>
void main()
{
	int a[10], i, s, pos;
	
	for(i=0; i<5; i++)
	{
	printf("Insert a value in [%d] = ", i);
	scanf("%d", &a[i]);
	}
	
	printf("\nEnter value that you want to search = ");
	scanf("%d", &s);
	
	for(i=0; i<5; i++)
	{
		if(a[i] == s)
		{
			pos = i;
		}		
	}
	printf("\nPosition of value is = %d", pos);
}
