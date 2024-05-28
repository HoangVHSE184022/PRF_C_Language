#include <stdio.h>
#include <stdlib.h>

int main()
{
	int x,y,t;
	
	do
	{
		printf("Enter x = "); scanf("%d", &x);
		printf("Enter y = "); scanf("%d", &y);
		
		//swap
		t=x;
		x=y;
		y=t;
		
		printf("x = %d\n",x);
		printf("y = %d\n",y);
	} while (x != 0 && y != 0);
	
	return 0;
}