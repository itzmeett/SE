/* Write a program to find the multiplication values and the cubic values using
inline function */

#include<iostream>
using namespace std;

class Math{
	
	float num1, num2, c_num; // float member for multiplication and cubic operation
	
	public: 
	
	void getdata()
	{
		cout<<"\nEnter a number-1 for multiplication : "; //for multiplication
		cin>>num1;
		
		cout<<"Enter a number-2 for multiplication : "; //for multiplication
		cin>>num2;
		
		cout<<"\nEnter a number for cubic operation : "; //for cube operation
		cin>>c_num;
	}
	
	inline void product() //it performs multiplication of "num1" and "num2"
	{
		cout<<"\nMUltiplication of ["<<num1<< "*" <<num2<<"]  = "<<num1*num2;
	}
	
	inline void cube() //it performs cubic operation of "c_num"
	{
		cout<<"\nCube of ["<<c_num<<"] = "<<c_num*c_num*c_num;
	}
};

main()
{
	Math m1; // m1 can access "Math" class members and methods by it's object 'm1'
	
	m1.getdata();
	m1.product();
	m1.cube();
	
}

