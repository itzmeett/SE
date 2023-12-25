#include<stdio.h>
main()
{
	
	FILE *fptr; // To access the file with pointer file type.
	char data[30]; // Data to store in file
	
	//fopen(filename, mode)
	fptr=fopen("myFirstFile.txt", "r");
	
	//checking that the file is ext or not.
	if(fptr == NULL)
	{
		printf("\n\n File is not opened...."); 
		
	}
	else
	{
		
		while(fgets(data, 30, fptr)!=NULL)
		{
			printf("\n\n%s", data);
		}
		
		fclose(fptr); //file is closed after reading.
	}	
}

