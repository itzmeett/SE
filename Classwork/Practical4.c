//Write a C program to enter two strings and check that the entered string are equal or not.
#include<stdio.h>
main()
{
	char str1[20], str2[20];
	
	
	printf("\nEnter First String : ");
	scanf("%s", &str1);
	
	printf("\nEnter Second String : ");
	scanf("%s", &str2);
	
	if(strcmp(str1, str2 ) == 0)
	{
		printf("\nStrings are matched");	
	}
	else
	{
		printf("\nString are not matched");
	}
	
}
