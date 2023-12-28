#include<iostream>
using namespace std;

class LectureDetails{ // "LectureDetails" class used for get and display data
	
	string faculty, subject, course;
	int lecture;
	
	public:
		int i;
		
	void getDetails() // "getDetails" method gets basic information about faculty
	{ 
		cout<<"\n--------------Enter Your Details of Lecure : "<<i<<" --------------\n";
		cout<<"\nEnter your name : ";
		cin>>faculty;
		
		cout<<"Enter your subject name : ";
		cin>>subject;
		
		cout<<"Enter your course name : ";
		cin>>course;
		
		cout<<"Enter total lectures : ";
		cin>>lecture;
	}
	
	void displayDetails()	// "displayDetails" can display data 
	{	
		cout<<"\n\n--------------Display Details of Lecture : "<<i<<" --------------\n";
		cout<<"\nName : "<<faculty;
		cout<<"\nSubject: "<<subject;
		cout<<"\nCourse : "<<course;
		cout<<"\nTotal Lectures : "<<lecture;
	}		
};

class FacultyInfo : public LectureDetails{ // "FacultyInfo" class is inherite the "LectureDetails" class
	
	string address, email, mobile_no;
	
	public:
	
FacultyInfo() /* it gets more information and derived basic information from base class, 
				"FacultyInfo" is constructor so it does'nt require object to access it data*/
	{	
		for(i=1; i<=5; i++)
		{
			getDetails(); // it is derived from "LectureDetails" class
	
			cout<<"Enter Your Address : ";
			cin>>address;
	
			cout<<"Enter Your Mobile number : ";
			cin>>mobile_no;
	
			cout<<"Enter Your Email ID : ";
			cin>>email;
		}
	}
	
	void displayInfo() // it display information using derived method
	{	
		for(i=1; i<=5; i++)
		{
			
			displayDetails(); // it is derived from base class and it's display basic info
	
			cout<<"\nAddress : "<<address;
			cout<<"\nMobile number : "<<mobile_no;
			cout<<"\nEmail ID : "<<email;
		}
	}		
};

main()
{
	cout<<"\n************************** Enter Details **************************\n";
	FacultyInfo f1; // "FacultyInfo" is constructor so when "f1 object" created it implemments it. 
	
	cout<<"\n*************************** Display Information **************************\n";
	f1.displayInfo(); // using 'f1' object it access "displayInfo" method.
}
