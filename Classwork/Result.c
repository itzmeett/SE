#include<stdio.h>
main()
{
	int rollno;
	int s1,s2,s3,s4,s5;
	float per,total;
	
	printf("\n\n Enter Roll No :");
	scanf("%d",&rollno);
	printf("\n\n Enter s1 :");
	scanf("%d",&s1);
	printf("\n\n Enter s2 :");
	scanf("%d",&s2);
	printf("\n\n Enter s3 :");
	scanf("%d",&s3);
	printf("\n\n Enter s4 :");
	scanf("%d",&s4);
	printf("\n\n Enter s5 :");
	scanf("%d",&s5);
	
	total=s1+s2+s3+s4+s5;
	per=total/5;
	
	printf("\n\n ....................................");
	printf("\n\n Roll no :%d",rollno);
	printf("\n\n Percentage = %.2f",per);
	
	if(s1>=40 && s2>=40 && s3>=40 && s4>=40 && s5>=40)
	{
		if(per>=70)
		printf("\n\n YOU GOT A+");
		else if (per>=60)
		printf("\n\n YOU GOT A");
		else if (per>=50)
		printf("\n\n YOU GOT B+");
		else if (per>=40)
		printf("\n\n YOU GOT B");
		else 
		printf("\n\n YOU GOT PASSED.");
	
	}
	else 
	printf("\n\n You FAILED the exam.......");
}
