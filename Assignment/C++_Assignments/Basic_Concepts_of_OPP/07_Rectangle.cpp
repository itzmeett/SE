/*
Write a C++ program to create a class called Rectangle that has private
member variables for length and width. Implement member functions to
calculate the rectangle's area and perimeter.
*/

#include<iostream>
using namespace std;

class Rectangle{
	float length, width; //privates member
	
	public:
	
	void getdata() //for getting data from the user
	{
		cout<<"\n-------------------Enter the details-------------------\n";
		cout<<"\nEnter a legnth of rectangle : ";
		cin>>length;
		
		cout<<"\nEnter width of rectangle : ";
		cin>>width;
	}
	
	void area() //for area calculation of rectangle
	{
		cout<<"\nArea of rectangle is = "<<length*width;
	}
	
	void perimeter() //for perimeter calculation of rectangle
	{
		cout<<"\nPerimeter of rectangle is = "<<2*(length + width);
	}
};

main()
{
	Rectangle r1; //r1 is a object that can access methods of rectangle class
	
	r1.getdata();
	cout<<"\n-------------------Area & Perimeter-------------------\n";
	r1.area();
	r1.perimeter();
}


