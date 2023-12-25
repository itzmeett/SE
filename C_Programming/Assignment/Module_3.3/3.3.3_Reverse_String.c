// WAP to find reverse of string using recursion 
#include<stdio.h>
main()
{
	char str[50];
	int  length = 0, i, j, temp;
	
	printf("Enter a string : ");
	gets(str);
	
	printf("\n\nDisplay String : %s", str[i]);
	
	for(i=0; str[i]!='\0'; i++)
	{
		length++;
	}
	
	printf("String length = %d", length);
	
	for(i=length, j=0; length>'\0'; i--, j++)
	{
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
	}

	printf("String Reverse : %s", temp);
}
