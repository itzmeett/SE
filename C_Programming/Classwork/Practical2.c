//Write a program to find out entered character is vowel or constant. (using switch case)
#include<stdio.h>
void main()
{
	char c;
	
	printf("Enter a character : ");
	scanf("%c", &c);
	
	switch(c)
	{
		case  'a' : 
		{
			printf("\nThis character is vowel");
			break;
		}
		case  'e' :
		{
			printf("\nThis character is vowel");
			break;
		}
		case  'i' :
		{
			printf("\nThis character is vowel");
			break;
		}
		case  'o' :
		{
			printf("\nThis character is vowel");
			break;
		}
		case  'u' :
		{
			printf("\nThis character is vowel");
			break;
		}
		case  'A' :
		{
			printf("\nThis character is vowel");
			break;
		}
		case  'E' :
		{
			printf("\nThis character is vowel");
			break;
		}
		case  'I' :
		{
			printf("\nThis character is vowel");
			break;
		}
		case  'O' :
		{
			printf("\nThis character is vowel");
			break;
		}
		case  'U' :
		{
			printf("\nThis character is vowel");
			break;
		}
		default :
			{
				printf("\nThis character is constant");
				break;
			}
	}
	
}
