#include<stdio.h>
main()
{
	int i,a[20],ele,num,flag=0,index;
	
	printf(" Enter the element of array = ");
	scanf("%d",&ele);
	
	printf("\n");
	
	for(i=0;i<ele;i++)
	{
		printf(" Enter the value of a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	

	for(i=0;i<ele;i++)
	{
		printf("\n a[%d] = %d ",i,a[i]);
	}

    printf(" \n\nEnter the number you want to delete :");
	scanf("%d",&num);
	
	for(i=0;i<ele;i++)
	{
		if(num==a[i])
		{
			flag=1;
			index=i;
		}
	}
	
	if(flag=0)
	{
		printf("\n\n Entered Number is not found in array element!...");
	}
	else
	printf("\n\n index of an enter elemnt is %d",index);
	{
		for(i=index;i<ele;i++)
		{
			a[i]=a[i+1];
		}
	}
	
	for(i=0;i<ele-1;i++)
	{
		printf("\n a[%d] = %d ",i,a[i]);
	}
	
}
