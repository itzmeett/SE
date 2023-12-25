#include<stdio.h>
#include<stdlib.h>
main()
{
	int arr1[3][3], arr2[3][3], arr3[3][3], press, i, j, k, add[3][3], sub[3][3], mul[3][3], div[3][3];
	
		

while( press != 6)
{
	printf("\nEnter any choice from the menu : ");
	scanf("%d", &press);

	printf("\n---------------------Press 1 for Traversing---------------------");
	printf("\n---------------------Press 2 for Addition operation---------------------");
	printf("\n---------------------Press 3 for Substraction operation---------------------");
	printf("\n---------------------Press 4 for Multiplication operation---------------------");
	printf("\n---------------------Press 5 for Division operation---------------------");
	printf("\n---------------------Press 6 for Exit---------------------");
				
				printf("\n\n");
				
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
				
				//Logics of addition, substraction & division operations
				
				for(i=0; i<3; i++)
				{
					for(j=0; j<3; j++)
					{	
						add[i][j] = arr1[i][j] + arr2[i][j]; 	
						sub[i][j] = arr1[i][j] - arr2[i][j];
						div[i][j] = arr1[i][j] / arr2[i][j];
					}
					printf("\n");
				}
			
				//Logic of multiplication
				
				for(i=0; i<3; i++)
				{
					for(j=0; j<3; j++)
					{
						arr3[i][j] = 0;
						for(k=0; k<3; k++)
						{
							arr3[i][j] = arr3[i][j] + arr1[i][k] * arr2[k][j];
						}
					}
				}
	
	
	switch(press)
	{
		case 1:
			{
				// For second 1st array
				
				printf("\n\nOutput Of First Array : \n");
	
				for(i=0; i<3; i++)
				{
					for(j=0; j<3; j++)
					{		
						printf(" %d ",arr1[i][j] );
					}
					printf("\n");
				}
				printf("\n");
	
				// For second 2d array
	
				printf("\n\nOutput Of Second Array : \n");
	
				for(i=0; i<3; i++)
				{
					for(j=0; j<3; j++)
					{		
						printf(" %d ",arr2[i][j] );
					}
					printf("\n");
				}
				break;
			}
			
			case 2:
				{
					printf("\n\nOutput Of Addition : \n");
	
					for(i=0; i<3; i++)
					{
						for(j=0; j<3; j++)
						{		
							printf(" %d ",add[i][j] );
						}
						printf("\n");
					}
					break;
				}
	
			case 3:
				{
					printf("\n\nOutput Of Substraction : \n");
	
					for(i=0; i<3; i++)
					{
						for(j=0; j<3; j++)
						{		
							printf(" %d ",sub[i][j] );
						}
						printf("\n");
					}
					break;
				}
			case 4:
				{
					printf("\n\nOutput Of Multiplication : \n");
					for(i=0; i<3; i++)
					{
						for(j=0; j<3; j++)
						{
							printf(" %d ", arr3[i][j]);
						}
						printf("\n");
					}		
					break;
				}
			case 5:
				{
					printf("\n\nOutput Of Division : \n");
	
					for(i=0; i<3; i++)
					{
						for(j=0; j<3; j++)
						{		
							printf(" %d ",div[i][j] );
						}
						printf("\n");
					}
					break;
				}
				
			case 6:
				{
					exit(0);
				}
				
			default:
				{
					printf("You have select a wrong input, Please select the valid choice.......");
				}
	}
}		
}

		
	


