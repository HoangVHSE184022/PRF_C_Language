
#include <stdio.h>
#include <math.h>

void fibo(){
	int t1=1, t2=1, f=1,i,n;
	do{
	printf("Enter a positive integral integer:");
	fflush(stdin);
	scanf("%d", &n);}
	while (n<1);
		printf("The first %d Fibonacci numbers: ", n);
	for (i=0; i<n;i++){
		f=t1+t2;
		t1=t2;
		t2=f;
	}
	int result=f;
	printf("%d\n\n", result);

}

int validDate(int d, int m, int y){
	int maxd=31;
	if (d<1 || d>31 || m<1 || m>12)
		return 0;
	if (m==4 || m==6 || m==9 || m==11)
		maxd=30;
	else if (m==2){
		if(y%400==0 || (y%4==0 && y%100!=0))
		maxd= 29;
		else maxd=28;
	}
	return d<=maxd;
}
	
void checkDate() {
	int d,m,y;
	printf("Insert date, month, year: ");
	fflush(stdin);
	scanf("%d%d%d", &d, &m, &y);
	if (validDate(d,m,y)==1)
		printf("Valid date\n\n");
	else
		printf("Invalid date\n\n");
}


int main() {
	int choice;
	do{
		printf("MENU\n");
		printf("1- Fibonacci sequence\n");
		printf("2- Check a date\n");
		printf("3- Quit\n");
		printf("Select an operation: "); scanf("%d", &choice);
		switch(choice){
			case 1:
				fibo();
				break;
			case 2:
				checkDate();
				break;	
		}
	}
	while (choice>0 && choice <3);
	return 0;
}
