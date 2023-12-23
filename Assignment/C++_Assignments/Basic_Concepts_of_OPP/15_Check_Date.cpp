/*  
15. Write a C++ program to implement a class called Date that has private
member variables for day, month, and year. Include member functions to
set and get these variables, as well as to validate if the date is valid.

*/

#include<iostream>
using namespace std;

class Date{
	
	int day, month, year;
	const int max_year = 9999;
	const int min_year = 1800;
	
	public:
		
//		void getdata()
//		{
//			cout<<"Enter Day : ";
//			cin>>day;
//			
//			cout<<"Enter Month : ";
//			cin>>month;
//			
//			cout<<"Enter  Year: ";
//			cin>>year;
//		}
		
		int leapyear(int year) //it checks leap year or not 
		{
			if( (year%4 == 0) && (year%100 != 0) || (year%400 == 0) )
			{
				return year;
			}
		}
		
		int check_date(int dd, int mm, int yy) //it checks year and month are valid or not
		{
			
			int day = dd;
			int month = mm;
			int year = yy;
			
			if(year > max_year || year < min_year) // yeaar is true if year is between 1800 to 9999
			{
				return false;
			}
			if(month < 1 || month > 12)
			{
				return false;
			}
			if(day < 1 || day > 31)
			{
				return false;
			}
			
			if(month == 2){ // month is true if it is between 1 to 12
				if(leapyear(year))
				{
					return	(day <= 29);
				}
				else{
					return (day <= 28);
				}
			}
			
			if(month == 4 || month == 6 || month == 9 || month == 11)
			{
				return (day <= 30);
				return true;
			}	
				
		}
};

main()
{
	int dd, mm, yy;
	
	Date check1; //check1 object can access "Date" class methods.
	
//	check1.getdata();
	check1.leapyear(2002);
	check1.check_date(31, 10, 2002) ? cout << "\nDate is valid" : cout<<"\nDate is not valid"; 
	check1.check_date(32, 11, 22023) ? cout << "\nDate is valid" : cout<<"\nDate is not valid";
	check1.check_date(30, 02, 2023) ? cout << "\nDate is valid" : cout<<"\nDate is not valid";
	
}
