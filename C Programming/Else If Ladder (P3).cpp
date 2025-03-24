#include<stdio.h>
#include<conio.h>
int main(){
int num;
	printf("Enter any number:\n");
	scanf("%d",&num);
	
	if(num%3==0){
		if(num%5==0){
		printf("The number is divisible by both 3 and 5.\n");
	}
     }
	else if(num%3==0){
		printf("The number is only divided by 3\n");
	}
	else if(num%5==0){ 
		printf("The number is only divided by 5\n");
	}
	else{
		printf("Number is divided by neither\n");
	}
	getch();
	return 0;
}
