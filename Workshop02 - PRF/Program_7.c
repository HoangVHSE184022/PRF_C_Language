#include <stdio.h>
#include <stdlib.h>	

main ()
{
	char c1, c2;
	int d;
	char t,c;
	
	printf("Enter c1 and c2: "); scanf("%c %c", &c1, &c2);
	
	if (c1>c2)
	{
		t=c1;
		c1=c2;
		c2=t;
	}
	
	d=c2-c1;
	printf("d = %d",d);
	
	for (c=c1;c <=c2;c++)
	{
		printf("%c: %d, %o, %X\n", c, c, c, c);
	}
	
	return 0;
}