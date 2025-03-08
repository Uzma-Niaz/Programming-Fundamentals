#include<stdio.h>
#include<conio.h>
int main(){
	
	int celcius,fahren;
	
	printf("Enter your value in Celcius: ");
	scanf("%d",&celcius);
	fahren= (9/5)*celcius+32;
	printf("The converted value from Celcius to Fahrenheit is: %d",fahren);
	
	getch();
	return 0;
	
}
