#include<stdio.h>
void main()
{
	int intType=10;
	float floatType=3.14;
	char charType='c';
	
	long int liType=99999922222;
	double doubleType=334455.556676;
	
	printf("\n\n\t Size of Integer : %d",sizeof(intType));
	printf("\n\n\t size of floating : %d",sizeof(floatType));
	printf("\n\n\t size of character :%d",sizeof(charType));
	printf("\n\n\t size of Long Integer :%d",sizeof(liType));
	printf("\n\n\t size of Double :%d",sizeof(doubleType));
}

