#include<stdio.h>

struct student{
	char Ename[20];
	int Emp_Id;
	float salary;
	
	struct Department{
		char Dname[20];
		int Dept_Id;
	}Dept;
}s1;
main()
{
	strcpy(s1.Ename, "Glenn Maxwell");
	s1.Emp_Id = 32;
	s1.salary = 201;
	
	strcpy(s1.Dept.Dname, "Batting_Department");
	s1.Dept.Dept_Id = 05;
	

printf("\nName of employee : %s", s1.Ename);
printf("\nId of employee = %d", s1.Emp_Id);
printf("\nSalary of employee = %.2f\n", s1.salary);

printf("\nDepartment of employee = %s", s1.Dept.Dname);
printf("\nId of department = %d", s1.Dept.Dept_Id);

}
