/* Write a C++ program to implement a class called Circle that has private
member variables for radius. Include member functions to calculate the
circle's area and circumference */
#include<iostream>
using namespace std;

	class Circle{
		float radius; //private member
		float pie=3.14;
		
		public:
			
		void area() //perform area of circle
		{
			cout<<"\nEnter the radius of circle : ";
			cin>>radius;
			
			cout<<"Area of the circle : "<<pie*radius*radius;
		}
		
		void perimeter()  //perform circumference of cirlce
		{
			cout<<"\nCircumference of cirlce is = "<<2*pie*radius;
		}
	};

main()
{
	Circle c1; //c1 is object that can access "Circle" class methods
	
	cout<<"\n-----------------------Area-----------------------\n";
	c1.area();
	cout<<"\n\n-----------------------Circumference-----------------------\n";
	c1.perimeter();	
	
}
