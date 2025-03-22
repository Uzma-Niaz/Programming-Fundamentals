#include<stdio.h>
#include<conio.h>
int main(){
	int num;
	printf("Enter a number:\n");
	scanf("%d",&num);
	if(num>0){
		printf("The number is positive.");
	}
	else{
		printf("The number is negative.");
	}
	getch();
	return 0;
}
