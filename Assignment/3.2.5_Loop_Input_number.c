/*2. WAP to take 10 no. Input from user and find out … 
How many Even numbers are there, 
How many odd numbers are there, 
Sum of even numbers,
Sum of odd numbers */
#include<stdio.h>
main()
{
	int i, even = 0, odd = 0, osum = 0, esum = 0, a[20];
	for(i=0; i<10; i++)
	{
		printf("Enter Number %d = ", i+1);
		scanf("%d", &a[i]);
	}
	
		for(i=0; i<10; i++)
	{
		printf("\nDisplay Number %d = %d",i+1, a[i]);
	}
	
	for(i=0; i<10; i++)
	{
		if(a[i] %2 == 0)
		{
			esum += a[i];
			even++;
			
		}
		else
		{
			odd++;
			osum += a[i];
		}
		
	}
	printf("\n\nThere are total %d even and %d odd numbers are exist", even, odd);

	
	printf("\n\nSum of even number = %d", esum);
	printf("\n\nSum of even number = %d", osum);
	
}
