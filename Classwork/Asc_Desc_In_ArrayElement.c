#include<stdio.h>
main()
{
	int i,j,a[5],temp, size;
	printf(" Enter the size of array element : ");
	scanf("%d", &size); 
	
	printf("\n");
	
	for(i=0;i<size;i++)
	{
		printf(" Enter the element a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
		 	if(a[i]>a[j])
			{
		  		temp=a[i];
		 		a[i]=a[j];
		 		a[j]=temp;
			}
		}		
	}
	
	printf("\n\nAcending Order : ");
	
	for(i=0;i<size;i++)
	{
		printf(" %d ",a[i]);
    }
    
    	printf("\n\nDecending Order : ");
    	
    for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
		 	if(a[i]<a[j])
			{
		  		temp=a[i];
		 		a[i]=a[j];
		 		a[j]=temp;
			}
		}
	
		for(i=0;i<size;i++)
		{
			printf(" %d ",a[i]);
    	}
	}
}
