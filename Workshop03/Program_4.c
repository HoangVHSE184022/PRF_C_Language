#include <stdio.h>
#include <stdlib.h>

double factorial(int n)
{
	double p=1;
	int i;
	for (i=2;i<=n;i++)
	{
		p=p*i;
	}
	return p;
}

int main()
{
	int n;
	double f;
	do
	{
		printf("Enter n = "); scanf("%d",&n);
	} while (n<0);
	f=factorial(n);
	printf("n! = %lf",f);
}