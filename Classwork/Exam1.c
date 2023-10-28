//Write a C program to take 5 strings from the user & print them on console
#include<stdio.h>
void main()
{
	int i;
	char s[5][20];
	
	for(i=0; i<5; i++)
	{
	printf("Enter a Name %d : ",i+1);
	scanf("%s", &s[i]);
	
	}
	
	printf("\n\n_________________________________________________\n");
	
	for(i=0; i<5; i++)
	{
	printf("\nName %d : %s", i+1, s[i]);
	}
} 
