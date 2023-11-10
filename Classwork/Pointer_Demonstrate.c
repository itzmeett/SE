#include<stdio.h>
main()
{
	int myage=22;
	int* ptr = &myage;
	
	printf("\nValue of myage = %d", myage);
	printf("\nAddress of myage = %p", &myage);
	printf("\nAddress of ptr = %p", ptr);
}
