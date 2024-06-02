#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int intRandom(int min,int max)
{
	return min + rand()%(max);
}

int main()
{
	int total, x, y, count;
	srand(time(NULL));
	do
	{
		system("cls");
		printf("  Dice Thrower\n");
		printf("=================\n");
		printf("Total sought: "); scanf("%d",&total);
	} while (total<2 || total>12);
	
	count = 1;
	
	do
	{
		x=intRandom(1,6);
		y=intRandom(1,6);
		printf("Result of throw %d: %d + %d\n",count,x,y);
		count++;
	} while ((x+y) != total);
	printf("You got your total in %d throw(s)!", count);
}