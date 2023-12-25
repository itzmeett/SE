#include<stdio.h>
main()
{
	int i;
	printf("\n\n Enter The Number ");
	scanf("%d",&i);
	
	if(i%2==0)
	{
	 	goto even;
	} 
	else
	{
	 	goto odd;
	}
	even : printf("\n\n The number is even :");
	    	exit(0);
	odd : printf("\n\n The number is odd :");
			exit(0);	
	 		
}
