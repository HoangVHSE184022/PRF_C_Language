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
		printf("  Ball Lottery\n");
		printf("=================\n");
		printf("Total sought: "); scanf("%d",&total);
	} while (total<2 || total>20);
	
	count = 1;
	
	do
	{
		x=intRandom(1,10);
		y=intRandom(1,10);
		printf("Result of pick %d and %d: %d + %d\n",count,count+1,x,y);
		count = count+2;
	} while ((x+y) != total);
	printf("You got your total in %d pick(s)!", count-1);
}