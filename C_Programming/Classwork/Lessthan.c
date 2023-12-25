#include<stdio.h>
main()
{
	int num;     //variable declaration
	
	printf("\n\n\t enter any number : ");
	scanf("%d",&num);
	
	if(num<100)    //if condition is true
	{
		printf("\n\n\t This number is smaller then 100...");
	}
	else        //if condition is true
	{
		printf("\n\n\t this number is greater then 100...");
	}
}
