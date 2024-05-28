#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) 
{
	double num1, num2, result;
	char op;
	
	printf("Enter num1, op, num2: "); scanf("%lf%c%lf", &num1, &op, &num2);
	
	switch (op)
	{
		case '+':
			result = num1 + num2; 
			printf("Result = %lf", result);
			break;
		case '-':
			result = num1 - num2;
			printf("Result = %lf", result);
			break;
		case '*':
			result = num1 * num2;
			printf("Result = %lf", result);
			break;
		case '/':
			if (num2 == 0)
			{
				printf ("Divide by 0");
			} else
			{
				result = num1/num2;
				printf("Result = %lf", result);
			}
	}
	
	return 0;
}