/*
WAP to show 
1. Monday to Sunday using switch case 
*/

#include<stdio.h>
main()
{
	int w;
	
	printf("\nPress 1 for MONDAY");
	printf("\nPress 2 for TUESDAY");
	printf("\nPress 3 for WEDNESDAY");
	printf("\nPress 4 for THURSDAY");
	printf("\nPress 5 for FRIDAY");
	printf("\nPress 6 for SATURDAY");
	printf("\nPress 7 for SUNDAY");
	
	printf("\n\nPlease enter your choice between 1 to 7 : ");
	scanf("%d", &w);
	
	switch(w)
	{
		case 1:
			{
				printf("\nMONDAY");
				break;
			}
			case 2:
			{
				printf("\nTUESDAY");
				break;
			}
			case 3:
			{
				printf("\nWEDNESDAY");
				break;
			}
			case 4:
			{
				printf("\nTHURSDAY");
				break;
			}case 5:
			{
				printf("\nFRIDAY");
				break;
			}
			case 6:
			{
				printf("\nSATURDAY");
				break;
			}
			case 7:
			{
				printf("\nSUNDAY");
				break;
			}
		default:
		{
				printf("\nYou have inserted wrong input");
				break;
		}
	}
	
}
