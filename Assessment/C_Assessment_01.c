#include<stdio.h>
main()
{
	int choice, n1, n2;
	printf("\n\n\n");
	printf("-------------------Menu-------------------\n");
	printf("\n 1. Addition");
	printf("\n 2. Substraction");
	printf("\n 3. Multiplication");
	printf("\n 4. Division");
	
	do{
	
	printf("\n\nEnter your choice : ");
	scanf("%d", &choice);
	
	printf("\nEnter First Number : ");
	scanf("%d", &n1);
	
	printf("Enter Second Number : ");
	scanf("%d", &n2);
		
	switch(choice)
	{
		case 1: { 
			printf("\nAddition = %d", n1+n2);
			printf("\n------------------------------------------");
			break;
		}
		case 2:
			{
			printf("\nSubstraction = %d", n1-n2);
			printf("\n------------------------------------------");
			break;
			}
		case 3:{
			printf("\nMultiplication = %d", n1*n2);
			printf("\n------------------------------------------");
			break;
		}
		case 4:{
			printf("\nDivision = %d", n1/n2);
			printf("\n------------------------------------------");
			break;
		}
		default:{
			printf("\nInvalid choice !!!!");
			printf("\n------------------------------------------");
			break;
		}	
	}
	}while(2 > 1);

}   
