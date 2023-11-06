#include<stdio.h>
	struct student
	{
		int roll_no;
		char name[20];
	};
	
	main()
	{
		struct student s1;
		struct student s2;
		
		s1.roll_no = 123;
		strcpy(s1.name, "eeee");
		
		printf("\n----------------------Information of STUDENT-1---------------------- ");
		printf("\n\nName : %s ", s1.name);
		printf("\n\nRoll number : %d ", s1.roll_no);
		
		s2.roll_no = 456;
		strcpy(s2.name, "tttt");
		
		printf("\n----------------------Information of STUDENT-2---------------------- ");
		printf("\n\nName : %s ", s2.name);
		printf("\n\nRoll number : %d ", s2.roll_no);
		
	}

