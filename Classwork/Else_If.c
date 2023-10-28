#include<stdio.h>
main()
{
	int rollno, marks;
	
	printf("\n\n\t enter rollno :");
	scanf("%d",&rollno);
	
	printf("\n\n\t enter marks :");
	scanf("%d",&marks);
	
	if(marks>=70)
		printf("you have destiction");	
	else if(marks>=60)
		printf("you have firstclass");
	else if(marks>=50)		
		printf("you have second class");
	else if(marks>=40)
		printf("you have passed");
	else
		printf("you are failed");		
}
