#include <stdio.h>
#include <conio.h>
int main(){
	
	int num1,num2,num3, avg;
	
	printf("Enter first number: ");
	scanf("%d", &num1);
	printf("Enter second number: ");
	scanf("%d", &num2);
	printf("Enter third number: ");
	scanf("%d", &num3);
	
	avg=num1+num2+num3/3;
	
	printf("The average of three numbers is: %d",avg);
	
	getch();
	return 0;
}
