#include <stdio.h>
#include <math.h>
	
void printMinMaxDigits( int n)
{  
	int digit; 
	int min, max ; 
	digit = n%10;  
	n = n/10; 
	min = max = digit;
	while (n>0) 
	{
		digit = n%10; 
    	n = n/10;
    	if (min > digit) 
		{
			min = digit;
		} 
    	if (max < digit) 
    	{
    		max = digit;
		}
	}
	printf("Max digit = %d\n", max);
	printf("Min digit = %d", min);
}

int prime(int n)
{
	int m=sqrt(n);
	int i;
	if (n<2) 
	{
		return 0;
	} else
	for (i=2;i<=m;i++)
	{
		if (n%i==0) 
		{
			return 0;
			break;
		} 
	}
	return 1; 
}

int main()
{
	int n;
	char c;
	do
	{
		printf("MENU\n");
		printf("1- Process primes\n");
		printf("2- Print min, max digit in an integer \n");
		printf("3- Quit\n");
		
		
		printf("Enter  your choice: "); scanf("%c",&c);
		
		
		switch(c)
		{
			case '1':
				{
					do
					{
						printf("Enter n = "); scanf("%d",&n);
					} while (n<0);
					if (prime(n)==1)
					{
						printf("It is a prime\n");
					} else
					{
						printf("It is not a prime\n");
					}
				break;
				}
			
			case '2':
				{
					do
					{
						printf("Enter n = "); scanf("%d",&n);
					} while (n<0);
					printMinMaxDigits(n);
					break;
				}
		}
	
		
	} while (c>0 && c<3);
}
