/* 17 Assume a class cricketer is declared. Declare a derived class batsman from
cricketer. Data member of batsman. Total runs, Average runs and best
performance. Member functions input data, calculate average runs, Display
data. (Single Inheritance) */

#include<iostream>
using namespace std;

class Cricketer{
	
	public:
    string playerName;
    int matchesPlayed;

	public:
    void InputData() { //insert player details
    	cout<<"\n---------------------------Enter Batsman Detail---------------------------\n";
        cout << "\nEnter player name: ";
        cin >> playerName;
        cout << "\nEnter matches played: ";
        cin >> matchesPlayed;
    }
		
};

class Batsman : private Cricketer{ //derive public class
	
	int averageRuns, performance, totalRuns; 
	string name;
	
	public:
	
	void InputData()
	{
		Cricketer::InputData(); // Call base class input from Cricketer class's data function
		
		cout<<"\nEnter batsman total runs: ";
		cin>>totalRuns;
		
		cout<<"\nEnter best performance score of batsman: ";
		cin>>performance;
		
		average();
	}
	
	void average()
	{ 
	        if (matchesPlayed > 0){
	            averageRuns = (totalRuns) / matchesPlayed;
	        } 
			else {
	            averageRuns = 0;
			}
 	}
	
	void display(){
		cout<<"\n\n---------------------------Player's Details---------------------------\n";
		cout << "\nPlayer Name: " << playerName;
		cout<<"\nTotal Runs: "<<totalRuns;
        cout << "\nMatches Played: " << matchesPlayed;
        cout << "\nAverage Runs: " << averageRuns;
		cout<<"\nPerformance: "<<performance;
			
	}
};

main()
{
	Batsman b1; /*object that can access both classes because here inheritence concept are using, 
	so last class object can access both classes*/
	
	b1.InputData();
	b1.display();
}
