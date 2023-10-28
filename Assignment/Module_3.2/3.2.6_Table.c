//WAP to print table up to given numbers
#include<stdio.h>
void main()
{
	int tab, size, i;
	
	printf("Which table do you want : ");
	scanf("%d", &tab);
	
	printf("Up to where you want to need : ");
	scanf("%d", &size);
	
	for(i =0; i<size; i++)
	{
		printf("\n%d x %d = %d" ,tab, i+1, tab*(i+1));
	}

}
