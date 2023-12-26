//20. Write a C++ Program display Student Mark sheet using Multiple inheritance

#include <iostream>
using namespace std;
class student
{
    public:
    string name ;
    int roll;
    void get()
    {
        cout<<"\nEnter the name : ";
        cin>>name;
        cout<<"\nEnter the roll.no :";
        cin>>roll;
    }
};
class mark
{
    public:
    int mark[4],i;
    void input()
    {
        cout<<"\nEnter the marks of 4 subject : "<<endl;
        for(i=0;i<4;i++)
        {
            cin>>mark[i];
        }
    }
};
class Info:public student,public mark
{
    public:
    int t;
    float avg;
    void calc()
    {
    	for(i=0; i<4; i++){
    		t+= mark[i];
//        t=mark[0]+mark[1]+mark[2]+mark[3];
        avg=t/4;
		}
    }
    void display()
    {
        cout<<"\nName : "<<name;
        cout<<"\nRoll.no : "<<roll;
        cout<<"\n\nMarks of 4 subjects:\n";
        for(i=1;i<=4;i++)
        {
            cout<<"\nMark["<<i<<"]= "<<mark[i];
        }
        cout<<endl;
        cout<<"\nTotal marks :"<<t;
        cout<<"\nAverage : "<<avg;
    }
};
int main()
{
    cout<<"\n--------------------Student mark list using multiple inheritance--------------------\n";
    cout<<"\n\n--------------------------------------------------------------------------------------\n\n";

	cout<<"\n--------------------Insert Details--------------------\n";
	
    Info i1;
    i1.get();
    i1.input();
    i1.calc();
    
    cout<<"\n--------------------Dispay Information--------------------\n";
    i1.display();
    return 0;
    
}
