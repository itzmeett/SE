//WAP to create simple calculator using class
#include<iostream>
using namespace std;

	class calculator{
		
			float n1, n2;
			
		public:
			
			//take the inputus from user
			void set_data()
			{
				cout<<" Enter first number: ";
				cin>>n1;
				
				cout<<"\n Enter second number: ";
				cin>>n2;
			}
			
			float sum()
			{				
				return n1+n2;
			}
			float sub()
			{
				return n1-n2;
			}
			float mul()
			{
				return n1*n2;
			}
			float div()
			{
				return n1/n2;
			}
			
			//display method print all arithmatic operations
			float display()
			{
				cout<<"\n Addition = "<<sum();
				cout<<"\n Substranction = "<<sub();
				cout<<"\n Multiplication = "<<mul();
				cout<<"\n Division = "<<div();
							
			}
	};
	
	main()
	{
		calculator calc; //'calc' is a object for accessing class methods.
		
		calc.set_data();
		calc.display();	
		
	}
