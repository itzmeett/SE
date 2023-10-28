//2. Vowel or Consonant using switch case
#include<stdio.h>
main()
{
	char c;
	
	printf("\nEnter any character : ");
	scanf("%c", &c);
	
	switch(c)
	{
		case 'a':
			case 'e':
				case 'i':
					case'o':
						case 'u':
							case 'A':
								case 'E':
									case 'I':
										case 'O':
											case 'U':
							{
								printf("\nThis character is VOWEL");
								break;
							}
							default :
								{
									printf("\nThis character is CONSONANT");
									break;
								}
					
	}
	
	
}
