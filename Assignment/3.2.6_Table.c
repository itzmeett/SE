//WAP to print table up to given numbers
#include<stdio.h>
main()
{
	int tab, size, i, store;
	
	Printf("Which table do you want : ");
	scanf("%d", &tab);
	
	printf("Up to where you want to need : ");
	scanf("%d", &size);
	
	for(i =0; i<size; i++)
	{
		store = tab*size; 
	}
	printf("Table of %d : %d x %d = %d", tab, tab, size, store);
}
