// fstream :
// fostream :
// finstream :

#include<fstream>
#include<iostream>
using namespace std;

main()
{
	ofstream fout;
	fout.open("File_handling_Text_file.txt", ios::app);
	cout<<"\n\n";
	fout<<"File handling first text file created and these text are write in this fout operation.";
	fout.close();
	
	ifstream fin;
	string line;
	
	fin.open("File_handling_Text_file.txt");
	
	while(getline(fin, line))
	{
		cout<<line;
	}
	
	fin.close();
}
