#include<stdio.h>
main()
{
	int i,a[10],evencount=0,oddcount=0;
	for(i=0;i<10;i++)
	{
		printf("\n\n Enter the Value a[%d] :",i);
		scanf("%d",&a[i]);

		if(a[i]%2==0)
		{
			evencount++;
		}
		else
		{
			oddcount++;
		}
	}
	printf("\n\n Evencount is %d",evencount);
	printf("\n\n Oddcount is %d ",oddcount);
}
