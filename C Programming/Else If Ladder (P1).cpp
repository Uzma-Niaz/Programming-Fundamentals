#include<stdio.h>
#include<conio.h>
int main(){
int num;
	printf("Enter your number:\n");
	scanf("%d",&num);
	if(num>0){
		printf("The number is positive\n");
	}
	else if(num==0){
		printf("The number is zero\n");
	}
	else{
		printf("The number is negative\n");
	}
	getch();
	return 0;
}
