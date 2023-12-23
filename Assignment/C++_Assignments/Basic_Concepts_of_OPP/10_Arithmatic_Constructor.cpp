/* 10. Write a program of Addition, Subtraction, Division, Multiplication using
constructor */

#include<iostream>
using namespace std;

class Math{
	float num1, num2;
	
	float num1 =n1;
	float num2 =n2;
	
	public:
		Math()
		{
			cout<<"Addition of ["<<n1<< "+" <<n2<<"] = "<<n1+n2; // for addition of "num1 + num2"
			cout<<"Substraction of ["<<n1<< "-" <<n2<<"] = "<<n1-n2; // for substraction of "num1 - num2"
			cout<<"Multiplication of ["<<n1<< "-" <<n2<<"] = "<<n1*n2; //for multiplication of "num1 * num2"
			cout<<"Division of ["<<n1<< "-" <<n2<<"] = " <<n1/n2; // for division of "n1 + num2"
		}
		
	};
	
	main(){
		
		float n1, n2;
		
		cout<<"\nEnter Number-1 : ";
		cin<<n1;
		
		cout<<"\nEnter Number-2 : ";
		cin<<n2;
		
		Math m1;
	}

