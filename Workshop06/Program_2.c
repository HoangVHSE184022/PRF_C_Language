#include <stdio.h>
#include <stdlib.h>
#define MAX 100
#include <math.h>


void exit(int n);

void inp(int a[MAX],int n)
{
	int i;
	for (i=0;i<n;i++)
	{
		printf("Enter a%d = ",i);
		scanf("%d",&a[i]);
	}
}

void out(int a[MAX],int n)
{
	int i;
	for (i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}

void program1(int a[MAX],int n)
{
	int i,x;
	printf("Enter new element: ");scanf("%d",&x);
//	for (i=n;i>0;i--)
//	{
//		a[i]=a[i-1];
//	}
	a[n]=x;
	printf("New string: ");
	for (i=0;i<n+1;i++)
	{
		printf("%d ",a[i]);
	}
}

int program2(int a[MAX],int n)
{
	int i,r=0,x;
	printf("Enter element to find: "); scanf("%d",&x);
	for (i=0;i<n;i++)
	{
		if(a[i]==x)
		{
			r=1;
			break;
		}
	}
	if(r==1)
	{
		printf("Available\n");
	} else
	{
		printf("Not found\n");
	}
}

void program6(int a[MAX],int n)
{
	int i,j,t;
	for (i=0;i<n;i++)
	{
		for (j=i+1;j<=n;j++)
		{
			if (a[j]<a[i])
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
	for (i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}

void program7(int a[MAX],int n)
{
	int i,j,t;
	for (i=0;i<n;i++)
	{
		for (j=i+1;j<=n;j++)
		{
			if (a[i]<a[j])
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
	for (i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}

void program8(int a[MAX],int n)
{
	int i,v1,v2,t;
	printf("Enter value1: "); scanf("%d",&v1);
	printf("Enter value2: "); scanf("%d",&v2);
	if (v2<v1)
	{
		t=v1;
		v1=v2;
		v2=t;
	}
	for (i=0;i<n;i++)
	{
		if (a[i]>=v1 && a[i]<=v2)
		{
			printf("%d ",a[i]);
		}
	}
}

main ()
{
	int a[MAX];
	int n,i,S,op,c;
	printf("Enter n = "); scanf("%d",&n);
	inp(a,n);
	
	do
	{
		system("cls");
		printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
		printf("|---------MENU OPTIONS-----------------------|\n");
		printf("|1 - Add a value-----------------------------|\n");
		printf("|2 - Search a value--------------------------|\n");
		printf("|3 - Remove the first existence of a value---|\n");
		printf("|4 - Remove all existences of a value--------|\n");
		printf("|5 - Print out the array---------------------|\n");
		printf("|6 - Print out the array in ascending order--|\n");
		printf("|7 - Print out the array in descending order-|\n");
		printf("|8 - Print out values in a range-------------|\n");
		printf("|9 - QUIT------------------------------------|\n");
		printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
		do
		{
			printf("Enter your option: "); scanf("%d",&op);
			
		} while (op<1&&op>9);
	
	
		switch(op)
		{
		
			case 1:
				{
					system("cls");
					program1(a,n);
					system("pause");
					break;
				}
			case 2:
				{
					system("cls");
					program2(a,n);
					system("pause");
					break;
				}
			case 3:
				{
					system("cls");
					int i,x,pos,c=1;
					printf("Enter the value: "); scanf("%d",&x);
					for (i=0;i<n;i++)
					{
						if (a[i]==x)
						{
							pos = i;
							break;
						}
					}
					for (i=pos;i<n-1;i++)
					{
						a[i]=a[i+1];
					}	
					n=n-1;
					system("pause");
					break;
				}
			case 4:
				{
					system("cls");
					int i,x,pos,count=0,c=1;
					printf("Enter the value: "); scanf("%d",&x);
					for (i=0;i<n;i++)
					{
						if (a[i]==x)
						{
							count=count+1;
						}
					}
					do
					{
						for (i=0;i<n;i++)
						{
						if (a[i]==x)
						{
							pos = i;
							break;
						}
					}
					for (i=pos;i<n-c;i++)
					{
						a[i]=a[i+1];
					}
						c++;
					} while (c<=count);
					n=n-count;
					system("pause");
					break;
				}
			case 5:
				{
					system("cls");
					if (c != 0)
					{
						out(a,n-c);
					} else
					{
						out(a,n);
					}
					
					system("pause");
					break;
				}
			case 6:
				{
					system("cls");
					program6(a,n);
					system("pause");
					break;
				}
			case 7:
				{
					system("cls");
					program7(a,n);
					system("pause");
					break;
				}
			case 8:
				{
					system("cls");
					program8(a,n);
					system("pause");
					break;
				}
			case 9:
				{
					system("cls");
					exit(0);		
				}		
		}
	} while (op!=9);
}