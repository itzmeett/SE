#include<stdio.h>
main()
{
	int recharge_value;
	printf("You have to minumum 749 rupees recharge for get cashback offer....");
	printf("\n\n Enter the value :");
	scanf("%d",&recharge_value);
	
	if(recharge_value>749)
	printf("\n\n The user is eligible for cashback !...");
	else 
	printf("\n\n Sorry user is not eligible for cashback !...");
}
