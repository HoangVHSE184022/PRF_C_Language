#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int case1(int d,int m, int y)
{
	int maxd=31;
	if((d>=1 && d<=31)&&(m<1 && m>12))
	{
		return 0;
	}
	if (m==4 || m==6 || m==9 || m==11)
	{
		maxd=30;
	} else 
	{
		if (m==2)
		{
			if (y%400==0 || (y%4==0 && y%100!=0))
			{
				maxd = 29;
			} else
			{
				maxd = 28;
			}
		}
		return d<=maxd;
	}
}

int main()
{
	int op,d,m,y;
	char c1,c2;
	do
	{
			system("cls");
			printf("--------------------------\n");
			printf("|1- Processing date data-|\n");
			printf("|2- Character data-------|\n");
			printf("|3- Quit-----------------|\n");
			printf("--------------------------\n");
		do
		{
			printf("Enter your option: "); scanf("%d",&op);
		} while (op<=0 || op>=4);
			switch (op)
			{
				case 1:
					{
						system("cls");
						printf("Enter date: "); scanf("%d",&d);
						printf("Enter month: "); scanf("%d",&m);
						printf("Enter year: "); scanf("%d",&y);
						if (case1(d,m,y))
							{
								printf("Valid date\n");
							} else
							{
								printf("Invalid date\n");
							}
						system("pause");
						break;
							
					}
				case 2:
					{
						system("cls");
					 	char start, end;
					 	getchar();
					    printf("Enter the starting character: ");
					    scanf("%c", &start); getchar();
					    printf("Enter the ending character: ");
					    scanf(" %c", &end); getchar();
					    
					    if (start < end) {
					        char temp = start;
					        start = end;
					        end = temp;
					    }
					    for (char c = start; c >= end; c--) {
					        printf("%c: %d, %xh\n", c, c, c);
					    }
					    system("pause");
					    break;
					}
			}
				
	} while (op!=3 );
}
