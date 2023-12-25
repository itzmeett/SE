/*WAP to take two Array input from user and sort them in ascending or 
descending order as per user’s choice */

#include<stdio.h>
main()
{
	int arr1[3][3], arr2[3][3], i, j, temp;
	
				//Insert value in first array :
				for(i=0; i<3; i++)
				{
					for(j=0; j<3; j++)
					{
						printf("First Array [%d] [%d] : ",i,j);
						scanf("%d",&arr1[i][j]);
					}
				}
				printf("\n");
				
				//Insert value in Second array :
					
				for(i=0; i<3; i++)
				{
					for(j=0; j<3; j++)
					{
						printf("Second Array [%d] [%d] : ",i,j);
						scanf("%d",&arr2[i][j]);
					}
				}
				
				//Ascending
				
				for(i=0; i<3; i++)
				{
					for(j=i+1; j<3; j++)
					{
						if(arr1[i] > arr1[j])
						{
							temp = arr1[i];
							arr1[i] = arr1[j];
							arr1[j] = arr1[i];
						}
					}
				}
				printf("\n\nAcending Order : ");
	
				for(i=0;i<3;i++)
				{
					printf(" %d ",arr1[i]);
				 }
				 
				//Decending
				
				for(i=0; i<3; i++)
				{
					for(j=i+1; j<3; j++)
					{
						if(arr1[i] < arr1[j])
						{
							temp = arr1[i];
							arr1[i] = arr1[j];
							arr1[j] = arr1[i];
						}
					}
				}
				printf("\n\nDecending Order : ");
	
				for(i=0;i<3;i++)
				{
					printf(" %d ",a[i]);
				 }
}
