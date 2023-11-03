#include<stdio.h>
#include<string.h>
main()
{
	char str1[35], str2[35];
	int len, i, j=0;
	
	printf("Enter String : ");
	gets(str1);
	
	len = strlen(str1);
	printf("\nLength of the string = %d\n", len);
	
	i = len - 1;
	str_reverse :
		str2[j] = str1[i];
		printf("%c", str2[j]);
		j++;
		i--;
		
		if(i<=len && i>=0)
		{
			goto str_reverse;
		}
}
