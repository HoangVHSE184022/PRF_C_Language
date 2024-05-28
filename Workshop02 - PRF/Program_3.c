#include <stdio.h>
#include <stdlib.h>

int main()
{
	int x,S;
	S = 0;

	do
	{
		scanf("%d",&x);
		if (x != 0)
		{
			S = S + x;
		}	
	} while (x!=0);
	
	printf("S = %d",S);
	
	return 0;
}