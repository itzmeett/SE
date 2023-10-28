#include<stdio.h>
main()
{
	int n=5;
	
	printf("\n %d",n);
	printf("\n %d",n++);
	printf("\n %d",n);
	printf("\n %d",n--);
	printf("\n %d",n);
	
	printf("\n %d",n);  //5
	printf("\n %d",++n);  //6
	printf("\n %d",n);  //6
	printf("\n %d",--n);  //5
	printf("\n %d",n); //5
}
