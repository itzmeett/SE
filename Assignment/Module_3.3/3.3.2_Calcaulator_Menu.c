/*WAP of Addition, Subtraction, Multiplication and Division using Switch 
case.(Must Be Menu Driven) */

#include<stdio.h>
#include<stdlib.h>
main()
{
	int num1, num2, i;
	printf("\nInsert any two value for basic arithmatic operations\n\n\n");

	printf("Enter the First value :");
	scanf("%d", &num1);
		
	printf("Enter the Second value :");
	scanf("%d", &num2);
	
	printf("\n____________________________________________________________________\n\n\n");
	
	printf("\nPress 1 for Addition operation");
	printf("\nPress 2 for Substraction operation");
	printf("\nPress 3 for Multiplication operation");
	printf("\nPress 4 for Division operation");
	printf("\nPress 5 for Modulo operation");
	printf("\nPress 6 for EXIT");
	
	printf("\n\nPress between 1 to 5 : ");
	scanf("%d", &i);
	
	printf("\n____________________________________________________________________\n");
	
	do{
	switch(i)
	{
		case 1:
			{
				printf("\n\nAddition of %d + %d = %d", num1, num2, num1+num2);
				break;
			}
		case 2:
			{
				printf("\n\nSubstraction of %d - %d = %d", num1, num2, num1-num2);
				break;
			}
		case 3:
			{
				printf("\n\nMultiplication of %d * %d = %d", num1, num2, num1*num2);
				break;
			}
		case 4:
			{
				printf("\n\nDivision of %d / %d = %d", num1, num2, num1/num2);
				break;
			}
		case 5:
			{
				printf("\n\nModulo of %d modulo %d = %d", num1, num2, num1%num2);
				break;
			}
		case 6:
			{
				exit(1);
				break;
			}
			default :
				{
					printf("\nYou have inserted a wrong input");
					break;
				}
	}
}while(i!=6);
	
}
