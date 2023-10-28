#include<stdio.h>
main()
{
	int salary;
	printf("\n\n\t Enter salary : ");
	scanf("%d",&salary);
	
	if(salary>=5000)
		printf("You are eligible for commition : ");
	
	else
		printf("SORRY! You are not eligible for commition");	
}
