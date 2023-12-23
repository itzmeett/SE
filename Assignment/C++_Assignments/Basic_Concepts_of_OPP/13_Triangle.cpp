/* 
13. Write a C++ program to create a class called Triangle that has private
member variables for the lengths of its three sides. Implement member
functions to determine if the triangle is equilateral, isosceles, or scalene.
*/

#include<iostream>
using namespace std;

class Triangle{
	int l1, l2, l3; //Triangle's three side of length is "l1, l2, and l3"
	
	public:
	
	void display() //shows the various size of triangle
	{
		cout<<"\nEnter the value of l1 = ";
		cin>>l1;
		
		cout<<"\nEnter the value of l2 = ";
		cin>>l2;
		
		cout<<"\nEnter the value of l3 = ";
		cin>>l3;
		
			cout<<"\n\n size of ["<<l1<<"] = "<<l1;
			cout<<"\n size of ["<<l2<<"] = "<<l2;
			cout<<"\n size of ["<<l3<<"] = "<<l3<<endl;
	} 
	void check_triangle()
	{
		if(l1==l2 && l1==l3) //for equilateral
		{	
			cout<<"\nAccording to the lengths of their sides, triangles can be classified as a EQUILATERAL";
		}
		else if(l1==l2 || l1==l3 || l2==l3) //for isosceles
		{	
			cout<<"\nAccording to the lengths of their sides, triangles can be classified as a ISOSCELES";
		}
		else //for scalene
		{	
			cout<<"\nAccording to the lengths of their sides, triangles can be classified as a SCALENE";
		}
	}
};

main()
{
	Triangle t1; // "t1" can access "Triangle" methods
	
	t1.display();
	t1.check_triangle();
	
}
