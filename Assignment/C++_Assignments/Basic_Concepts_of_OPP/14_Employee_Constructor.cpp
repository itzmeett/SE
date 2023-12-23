/* 14. Write a C++ program to implement a class called Employee that has
private member variables for name, employee ID, and salary. Include
member functions to calculate and set salary based on employee
performance. Using of constructor*/

#include<iostream>
using namespace std;

class Employee
{
	string name;
	int Emp_id, salary;
	float performance;
	
	public:
		Employee() //get employee details
		{
			cout<<"--------------------Enter Detail--------------------\n";
			cout<<"\nEnter employee name : ";
			cin>>name;
			
			cout<<"Enter employee ID : ";
			cin>>Emp_id;
			
			cout<<"Enter employee salary : ";
			cin>>salary;
			
			cout<<"Enter employee performance out of 10.00 : ";
			cin>>performance;
			
			cout<<"\n\n--------------------Increment aspect ratio--------------------\n\n"; //increment depends on performance
			
			cout<<"If performance is [5.0 and between 7.00] out of 10.0 then 5% increment get"<<endl;
			cout<<"If performance is [7.0  and between 9.00] out of 10.0 then 10% increment get"<<endl;
			cout<<"If performance is [9.0  and between 10.00] out of 10.0 then 20% increment get"<<endl;
			
			cout<<"\n\n--------------------Total Salary--------------------\n";
			
			if(performance >= 5.0 && performance <= 6.99  ){
				cout<<"\nBefore increment salary is = "<<salary;
				cout<<"\nSalary increased by 5% and total salary gets = "<<salary+(0.05*salary);
			}
			else if(performance >= 7.0 && performance <= 8.99){
				cout<<"\nBefore increment salary is = "<<salary;
				cout<<"\nSalary increased by 10% and total salary gets = "<<salary+(0.10*salary);
			}
			else if(performance >= 9.0&& performance <= 10.00){
				cout<<"\nBefore increment salary is = "<<salary;
				cout<<"\nSalary increased by 20% and total salary gets = "<<salary+(0.20*salary);
			}
			else{
				cout<<"\nSorryy you are not eligible for salary increment";
				cout<<"\nNOTE : Your performation ratio must be more than 5.00 for increment...";
		}
	}
		
};

main()
{
	
	Employee e1; // only you have to create obj for execute Constructor "Employee"	
}
