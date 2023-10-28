/*Write a program you have to make a summation of first and last Digit. (E.g., 
1234 Ans: -5)*/
#include<stdio.h>
main()
{
	int num, lastdigit = 0, firstdigit = 0, sum = 0;
	
	printf("\nEnter any Number : ");
	scanf("%d", &num);
	
	lastdigit = num % 10;
	while(num >= 10)
	{
			num /= 10;
	}

	firstdigit = num; 	
	sum = firstdigit + lastdigit;
	
	printf("Sum of first and last digit of given number is = %d", sum);
	
}
