/*Write a program to find out the max from given number (E.g., No: -1562 
Max number is 6)*/
#include<stdio.h>
main()
{
	
	int num, large = 0, rem = 0;
	
	printf("\nEnter any Number : ");
	scanf("%d", &num);
	
	while(num>0)
	{
		rem = num%10;
			if(rem > large)
		{
			large = rem;
		}
		num /= 10;
	}	
		printf("\n%d is maximum number out of %d", large, num);
}
