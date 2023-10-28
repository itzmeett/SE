/*WAP to print number in reverse order e.g.: number = 64728 ---> reverse = 
82746 */

#include<stdio.h>
main()
{
	int num, reverse = 0;
	
	printf("\nEnter any Number : ");
	scanf("%d", &num);
	
	while(num > 0)
	{
		reverse = reverse*10 + num%10;
		num = num/10;
	
	}
	printf("\nReversed number is = %d", reverse); 

	
	
}
