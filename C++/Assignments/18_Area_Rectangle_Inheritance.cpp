//18. Write a C++ Program to find Area of Rectangle using inheritance
#include<iostream>
using namespace std;

class size{ //size can get data from this class
	
	public:
	float l, w;
	
	public:
	void getdata()
	{
		cout<<"\nInsert length of rectangle : ";
		cin>>l;
		
		cout<<"\nInsert width of rectangle : ";
		cin>>w;	
	}
	
	
};

class area : public size{ // inherite the "size class"
	
	float len, wid;
//	l = len;
//	w = wid;
	
	public:
		
	area(){ //we create constructor
		getdata();
		cout<<"\nArea of rectangle is = "<<l*w;
	}
};

main()
{
	area a; //only we have to create object because we used constructor
	
}

