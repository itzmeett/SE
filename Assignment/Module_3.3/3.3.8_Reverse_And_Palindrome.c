//WAP to reverse a string and check that the string is palindrome or not

#include<stdio.h>
main()
{
	char str[40];
	int i,flag=0,length=0;
	
	printf("\n\n Enter the String : ");
	gets(str);
	
	printf("\n\n String is %s",str);
	
	for(i=0;str[i]!='\0';i++)
	{
		length++;
	}
	
	for(i=0;i<length;i++)
	{
		if(str[i]!=str[length-i-1])
		flag=1;

	}
	if(flag==1)
    {
    printf("\n\n String is not  Palindrome");
	}
	else
	
	{
		printf("\n\n String is  Palindrome");
	}	
}
