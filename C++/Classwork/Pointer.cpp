#include<iostream>
using namespace std;

class Department{
	public:
		int dept_id;
		string dept_name;

		Department(int dept_id, string dept_name)		
		{
			this-> dept_id = dept_id;
			this-> dept_name = dept_name;
		}			
};

class Employee{
	private:
		Department*dept;
		
		public:
			int emp_id;
			string emp_name;
			
			Employee(int emp_id, string emp_name, Department *dept )
			{
				this->emp_id = emp_id;
				this->emp_name = emp_name;
				this->dept = dept;
			}
			
			void display()
			{
				cout<<"\n\n\t Emp ID = "<<emp_id;
				cout<<"\n\n\t Emp Name = "<<emp_name;
				
				cout<<"\n\n\t Dept ID = "<<dept-> dept_id;
				cout<<"\n\n\t Dept Name = "<<dept-> dept_name;
			}
};

main()
{
	Department D(111, "Sales");
	Employee E(1, "Mayur", &D);
	E.display();
}
