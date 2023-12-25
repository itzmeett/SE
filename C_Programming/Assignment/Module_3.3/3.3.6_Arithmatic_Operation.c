/*WAP to make addition, Subtraction and multiplication of two matrix using 
2-D Array*/

#include<stdio.h>
main()
{
	
int arr1[3][3], arr2[3][3], arr3[3][3], i, j, k, sum[3][3], sub[3][3], mul3[3][3];

			//Insert value in first array :
				printf("\nInsert First array elements :\n\n");
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
				
				printf("\nDisplay Second array elements :\n\n");	
				for(i=0; i<3; i++)
				{
					for(j=0; j<3; j++)
					{
						printf("Second Array [%d] [%d] : ",i,j);
						scanf("%d",&arr2[i][j]);
					}
				}
				
				// for addition, substraction
				
				for(i=0; i<3; i++)
				{
					for(j=0; j<3; j++)
					{	
						sum[i][j] = arr1[i][j] + arr2[i][j]; 	
						sub[i][j] = arr1[i][j] - arr2[i][j];
					}
					printf("\n");
				}
				
				// for multiplication
				
				for(i=0; i<3; i++)
                {
                    for(j=0; j<3; j++)
                    {
                        mul3[i][j] = 0;
                        for(k=0; k<3; k++)
                        {
                            mul3[i][j] = mul3[i][j] + arr1[i][k] * arr2[k][j];
                        }
                    }
                }
               	 	printf("\n-------------------------------------------------------\n");
                	printf("\n\n-----------------Output Of Addition----------------- \n");
	
					for(i=0; i<3; i++)
					{
						for(j=0; j<3; j++)
						{		
							printf(" %d ",sum[i][j] );
						}
						printf("\n");
					}
					printf("\n-------------------------------------------------------");
					printf("\n\n-----------------Output Of Substraction----------------- \n");
	
					for(i=0; i<3; i++)
					{
						for(j=0; j<3; j++)
						{		
							printf(" %d ",sub[i][j] );
						}
						printf("\n");
					}
					printf("\n-------------------------------------------------------");
					printf("\n\n-----------------Output Of Multiplication-----------------\n");
					for(i=0; i<3; i++)
					{
						for(j=0; j<3; j++)
						{
							printf(" %d ", mul3[i][j]);
						}
						printf("\n");
					}
                
                
                            
}		
