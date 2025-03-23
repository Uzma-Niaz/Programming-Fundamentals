#include<stdio.h>
#include<conio.h>
int main(){
	int num1,num2,num3 ;
	
	printf("Enter first number:\n");
	scanf("%d",&num1);
	
	printf("Enter second number:\n");
	scanf("%d",&num2);
	
	printf("Enter third number:\n");
	scanf("%d",&num3);
	
	if(num1>num2){
		if(num1>num3){
			printf("First number is greatest");
		}
	}
	
		if(num2>num1){
			if(num2>num3){
			printf("Second number is greatest");
		}
	}
	      if(num3>num1){
	      	if(num3>num1){
	      		printf("Third number is greatest");
			  }
		  }
	
	getch();
	return 0;
}
