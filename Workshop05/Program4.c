#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int op;
    do {
    	printf("---------------------------\n");
    	printf("|1- Quadratic equation----|\n");
        printf("|2- Bank deposit problem--|\n");
		printf("|3- Quit------------------|\n");
		printf("---------------------------\n");
		do
		{
        printf("Choose an operation: ");
        scanf("%d", &op);
    	} while (op<1 || op>3);
        switch(op) {
            case 1: 
			{
				system("cls");
                double a, b, c;
                printf("Enter the coefficients a, b, and c of the quadratic equation (ax^2 + bx + c = 0):\n");
                scanf("%lf %lf %lf", &a, &b, &c);
                double delta = b*b - 4*a*c;
                if (delta < 0) {
                    printf("No real roots\n");
                } else if (delta == 0) {
                    double x = -b / (2*a);
                    printf("One double root: x = %lf\n", x);
                } else {
                    double x1 = (-b + sqrt(delta)) / (2*a);
                    double x2 = (-b - sqrt(delta)) / (2*a);
                    printf("Two real roots: x1 = %lf, x2 = %lf\n", x1, x2);
                }
                system("pause");
                break;
            }
            case 2: 
			{
				system("cls");
                double deposit, rate;
                int years;
                printf("Enter your deposit, yearly rate (in decimal), and number of years:\n");
                scanf("%lf %lf %d", &deposit, &rate, &years);
                if (deposit <= 0 || rate <= 0 || rate >= 1 || years <= 0) {
                    printf("Invalid input\n");
                } else {
                    double amount = deposit * pow(1+rate, years);
                    printf("After %d years, your amount will be %lf\n", years, amount);
                }
                system("pause");
                break;
            }
        }
    } while (op != 3);
    return 0;
}
