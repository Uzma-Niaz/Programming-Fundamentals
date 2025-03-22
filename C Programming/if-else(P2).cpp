#include<stdio.h>
#include<conio.h>
int main(){
	int num1,num2;
	printf("Enter first number:\n");
	scanf("%d",&num1);
	printf("Enter second number:\n");
	scanf("%d",&num2);
	
	if(num1>num2){
		printf("First number is greater.");
	}
	else{
		printf("Second number is greater or equal.");
	}
	getch();
	return 0;
}
