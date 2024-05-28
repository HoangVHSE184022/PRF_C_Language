#include <stdio.h>
#include <stdlib.h>	
#include <ctype.h>

int main()
{
	char ch;
	int nVowels = 0;
	int nConsonants = 0;
	int nOthers = 0;
	
	printf("Enter ch: ");
	do
	{
		ch = getchar();
		ch = toupper(ch);
		if (ch >= 'A' && ch <= 'Z')
		{
			switch(ch)
			{
				case 'A':
				{
					nVowels++;
					break;
				}
				case 'E':
				{
					nVowels++;
					break;
				}
				case 'I':
				{
					nVowels++;
					break;
				}
				case 'O':
				{
					nVowels++;
					break;
				}
				case 'U':
				{
					nVowels++;
					break;
				}
				default:
				{
					nConsonants++;
				}
			}
		} else
		if (ch !=10)
		{
			nOthers++;
		}
	} while (ch != '\n');
	
	printf("nVowels = %d\n",nVowels);
	printf("nConsonants = %d\n",nConsonants);
	printf("nOthers = %d",nOthers);
	
	
	return 0;
}