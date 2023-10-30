#include<stdio.h>
main()
{
	int a , b ;
	char choice;
	printf("\n\n Enter the number a :");
	scanf("%d",&a);
	printf("\n\n Enter the number b :");
	scanf("%d",&b);
	
	printf("\n\n ...........Arithmetic Operation...........");
	printf("\n\n Press '+' Addition");
	printf("\n\n Press '-' Subtraction");
	printf("\n\n Press '*' Multiplication");
	printf("\n\n Press '/' Division");
	printf("\n\n Press '%%' Modulus");
	printf("\n\n ..........................................");
	printf("\n\n Enter the number choice:");
	scanf(" %c",&choice);
	
	switch(choice)
	{
		case '+':printf("\n\n Addition of these Two number is :%d",(a+b));
		break;
		case '-':printf("\n\n Subtraction of these Two number is :%d",(a-b));
		break;
		case '*':printf("\n\n Multiplication of these Two number is :%d",(a*b));
		break;
		case '/':printf("\n\n Division of these Two number is :%d",(a/b));
		break;
		case '%':printf("\n\n Modulus of these Two number is :%d",(a%b));
		break;
		default:
		printf("\n\n You have entered the wrong choice......");
	
	}
}
