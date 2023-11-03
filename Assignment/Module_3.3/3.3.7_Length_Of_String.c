//WAP Find out length of string without using inbuilt function

#include<stdio.h>
#include<string.h>
main()
{
	char str[100], length = 0, i;
	
		printf("Enter any string : ");
		gets(str);
	
	
	for(i=0; str[i]!='\0'; i++)
	{
		length++;
	}
	
	printf("\n\nLength of string is = %d", length);
	
}
