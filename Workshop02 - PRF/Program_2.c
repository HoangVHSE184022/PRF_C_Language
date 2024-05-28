#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) 
{
	long pa, pd, n, tf, ti, income, it, ex;
	pa = 9000000; pd = 3600000;
	
	printf("Your income of this year: "); scanf("%ld", &income);
	printf("Number of dependent: "); scanf("%ld", &n);
	tf = 12*(pa + n*pd);
	printf("Tax-free income: %ld\n", tf);
	ti = income - tf;
	if (ti <=0)
	{
		printf("Taxable income: 0\n");
		printf("Income tax: 0");
	} else
	{
		printf("Taxable income: %ld\n", ti);
		ex = ti;
		if (ti<=5000000)
		{
			ti = ex*0.05;
		} else
		{
			if (ti <= 10000000)
			{
				it = 5000000*0.05 + (ex - 5000000)*0.1;
			} else
			{
				if (ti <= 18000000)
				{
					it = 5000000*0.05 + (10000000-5000000)*0.1 + (ex - 10000000)*0.15;
				} else
				{
					if (ti>18000000)
					{
						it = 5000000*0.05 + (10000000-5000000)*0.1 + (18000000 - 10000000)*0.15 + (ex-18000000)*0.2;
					}
				}
			}
		}
		printf("Income tax: %ld", it);
	}
	
	return 0;
}