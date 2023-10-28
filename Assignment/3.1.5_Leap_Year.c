// WAP to check if the given year is a leap year or not.
#include<stdio.h>
main()
{
	int year;
	
	printf("Enter Year : ");
	scanf("%d", &year);
	
	if(year % 400 == 0)
	{
		printf("\n%d is leap year", year);
	}
	else if(year % 100 == 0)
	{
		printf("\n%d is leap year", year);
	}
	else if(year % 4 == 0)
	{
		printf("\n%d is leap year", year);
	}
	else
	{
		printf("\n%d is  a not leap year", year);
	}
}
