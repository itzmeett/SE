// WAP to find simple interest 
#include<stdio.h>
main()
{
	float amount, year, rate;
	
	printf("Enter Amount : ");
	scanf("%f", &amount);
	
	printf("Specify year : ");
	scanf("%f", &year);
	
	printf("How much rate per year : ");
	scanf("%f", &rate);
	
	printf("\nThe total interest you will got is = %.2f", (amount*year*rate)/100);
		
}
