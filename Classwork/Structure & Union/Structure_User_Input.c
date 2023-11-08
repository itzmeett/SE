#include<stdio.h>
#include<string.h>

struct student{
	int rollno;
	char name[30];
	float marks;
}s1[3];

main()
{
	
//	struct Student s1[3];
	int i;
	
	for(i=0; i<3; i++)
	{
		printf("\n\nEnter details of student : %d\n\n", i+1);
		printf("Enter student name : ");
		scanf("%s", &s1[i].name);
		
		printf("Enter rollno of student : ");
		scanf("%d", &s1[i].rollno);
		
		printf("Enter marks of student : ");
		scanf("%f", &s1[i].marks);
	}
	
	for(i=0; i<3; i++)
	{
	printf("\n\nxDetails of student : %d", i+1);	
	printf("\n\nName of student = %s", s1[i].name);
	printf("\n\nRollno of student = %d", s1[i].rollno);
	printf("\n\nMarks of student = %.2f", s1[i].marks);
	}
}
