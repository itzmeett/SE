#include<stdio.h>
main()
{
	
	FILE *fptr; // To access the file with pointer file type.
	char data[30] = "The damo file of C"; // Data to store in file
	
	//fopen(filename, mode)
	fptr= fopen("myFirstFile.txt", "w");
	
	//checking that the file is ext or not.
	if(fptr == NULL)
	{
		printf("\n\n File is not opened...."); 
		
	}
	else
	{
		if (fptr!=EOF) //EOF is End Of File position
		{
			fputs(data, fptr); //To write into files
		}
	}
	
	
}

