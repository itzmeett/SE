#include<stdio.h>
main()
{
	int n1, n2, n3;
	printf("\n\n\t Input numbers");
	scanf("%d %d %d",&n1,&n2,&n3);
	
	if(n1>n2)
		printf("\n\n Number1 is bigger..");
		
	else if(n2>n3)
		printf("\n\n Number2 is bigger..");
		
	else
		printf("\n\n Number3 is bigger");		
}
