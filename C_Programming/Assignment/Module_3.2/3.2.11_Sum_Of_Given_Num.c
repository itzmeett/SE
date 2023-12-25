//Write a program make a summation of given number (E.g., 1523 Ans: -11) 
#include<stdio.h>
main()
{
	int num, sum = 0, rem;
	
	printf("\nEnter any Number : ");
	scanf("%d", &num);
	
	while(num>0)
	{
		rem = num % 10;
		sum += rem;		
		num /= 10;
	}
	printf("\nSum of number of digit is = %d", sum);
}
