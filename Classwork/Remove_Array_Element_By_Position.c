//Remove element by position
#include<stdio.h>
main()
{
	int i,a[20],ele,index;
	
	printf("\n Enter the element of array = ");
	scanf("%d",&ele);
	
	printf("\n")
	
	for(i=0;i<ele;i++)
	{
		printf(" Enter the value of a[%d] = ",i);
		scanf("%d",&a[i]);
	}

	for(i=0;i<ele;i++)
	{
		printf("\n a[%d] = %d ",i,a[i]);
	}
	
	printf("\n\n Enter the index number you want to remove = ");
	scanf("%d",&index);
	
	for(i=index;i<ele;i++)
	{
		a[i]=a[i+1];
	}
	
	printf("\n After Removing array element : ");
	
	for(i=0;i<ele-1;i++)
	{
		printf("\n\n a[%d] = %d ",i,a[i]);
	}
	
}
