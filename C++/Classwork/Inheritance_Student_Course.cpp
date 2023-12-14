//WAP 

#include<iostream>
using namespace std;

class Student{
	int stud_id, stud_name, city, age;
	
	void get_stud_data()
	{
		cout<<"Enter student ID : ";
		cout<<"Enter student Name : ";
		cout<<"Enter student City : ";
		cout<<"Enter student Age : ";
	}
	
};

class Course : public Student{
	string course_name= "comuputer engineering";
	string city = "Ahmedabad";
	int age = 21;
	int fees;
	
	void get_course()
	{
		cout<<"Enter student ID : ";
		cin>>"%s";
		cout<<"Enter student Name : ";
		cin>>"%s";
		cout<<"Enter student City : ";
		cin>>"%s";
		cout<<"Enter student Age : ";
		cin>>"%d";
	}
	
	void print_course()
	{
		cout<<"Student id = %s", course_name;
		cout<<"Student city = %s", city;
		cout<<"student age = %d", age;
	}
	
	main()
	{
		course s1;
		s1.get_courrse();
		s1.print_course();
	}
};
