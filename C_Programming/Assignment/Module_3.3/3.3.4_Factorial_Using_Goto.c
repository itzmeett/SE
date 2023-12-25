#include<stdio.h>
main()
{
	int i, num, fact=1;
	
	printf("Input element that you want to factorial : ");
	scanf("%d", &num);
	
	if(num >= 0 )
		{
			goto factorial;
		}
	
	factorial:
		if(num==0)
		{
			printf("Factorial of 0 is = 1");
    	}
	    else
    	{
    		
			for(i=1; i<=num; i++)
			{
				fact = fact*i;
			}
			printf("\n Factorial of %d is = %d", num, fact);
		}s	
}
