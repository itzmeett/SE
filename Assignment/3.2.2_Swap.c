//WAP to swap two numbers without using third variable
#include<stdio.h>
main()
{
	int n1,n2, temp;
	
	printf("Enter Number 1 = ");
	scanf("%d", &n1);
	
	printf("Enter Number 2 = ");
	scanf("%d", &n2);
	
	printf("\nBefore swap : ");
	printf("\nNumber 1 = %d", n1);
	printf("\nNumber 2 = %d", n2);
	
	temp = n1;
	n1 = n2;
	n2 = temp;
	
	printf("\n\nAfter swaping : ");
	printf("\nNumber 1 = %d", n1);
	printf("\nNumber 2 = %d", n2);
		
}
