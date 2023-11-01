#include<stdio.h>
main()
{
	int choice; // choice for switch case
	float n1, n2; //n1 & n2 declare for user input
	
	// Print the menu options for operations
	printf("\n\n\n");
	printf("-------------------Menu-------------------\n");
	printf("\n 1. Addition");
	printf("\n 2. Substraction");
	printf("\n 3. Multiplication");
	printf("\n 4. Division");
	printf("\n 5. Exit");
	
	// Using do while loop for exit menu
	
	while(choice !=5){
	
	printf("\n\nEnter your choice : ");
	scanf("%d", &choice);
	
	printf("\nEnter First Number : ");
	scanf("%f", &n1);
	
	printf("Enter Second Number : ");
	scanf("%f", &n2);
		
	switch(choice)
	{
		case 1: { 
			printf("\nAddition = %.2f", n1+n2); 
			printf("\n------------------------------------------");
			break;
		}
		case 2:
			{
			printf("\nSubstraction = %.2f", n1-n2);
			printf("\n------------------------------------------");
			break;
			}
		case 3:{
			printf("\nMultiplication = %.2f", n1*n2);
			printf("\n------------------------------------------");
			break;
		}
		case 4:{
			printf("\nDivision = %.2f", n1/n2);
			printf("\n------------------------------------------");
			break;
		}
		case 5:{
			exit(1);
			break;
		}
		default:{
			printf("\nInvalid choice !!!!");
			printf("\n------------------------------------------");
			break;
		}	
	}
	}
}
  
