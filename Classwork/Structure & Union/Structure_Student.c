#include<stdio.h>
#include<string.h>

struct student{
	int rollno;
	char name[30];
	float marks;
}s1;

main()
{
	s1.rollno = 32;
	strcpy(s1.name, "Glenn Maxwell");
	s1.marks=201;
	
	printf("\n\nName of student = %s", s1.name);
	printf("\n\nRollno of student = %d", s1.rollno);
	printf("\n\nMarks of student = %.2f", s1.marks);
}
