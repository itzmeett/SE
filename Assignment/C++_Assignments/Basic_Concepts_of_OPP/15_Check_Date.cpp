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
		
		void leapyear(int year)
		{
			if( (year%4 == 0) && (year%100 != 0) || (year%400 == 0) )
			{
				cout<<"\nThis "<<year<<" is leap year";
			}
		}
		
		void check_date(int dd, int mm, int yy)
		{
			
			int day = dd;
			int month = mm;
			int year = yy;
			
			if(year > max_year || year < min_year)
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
			
			if(month == 2){
				if(leapyear(year))
				{
					return	(day <= 29);
				}
				else{
					return (day <= 28);
				}
			}
			
			if(month == 4 || month == 6 || month == 9 || month == 11 )
			{
				return (day <= 30);
				return true;
			}		
		}
};

main()
{
	int dd, mm, yy;
	
	Date check1;
	
	check1.leapyear(2002);
	check1.leapyear(29, 02, 2002);
}
