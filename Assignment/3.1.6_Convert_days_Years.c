// WAP to convert years into days and days into years
#include<stdio.h>
main()
{
	int day, year, c, y;
	
	printf("\nPress 1 for convert years into days");
	printf("\nPress 2 for convert days into years");
	
	printf("\n\nEnter your choice : ");
	scanf("%d", &c);
	
	switch(c)
	{
		case 1:
			{
				printf("\nEnter Years : ");
				scanf("%d",year);
				y = (year*365);
				printf("\n%d years is contains around %d days", year, y);
				break;
			}
		case 2:
			{
				printf("\nEnter Days : ");
				scanf("%d",day);
			    printf("\n%d Days is contains around %d Years", day, (day/365));
				break;	
			}
		default:
			{
					printf("Please select valid choice");
					break;
			}
	}
	
}
