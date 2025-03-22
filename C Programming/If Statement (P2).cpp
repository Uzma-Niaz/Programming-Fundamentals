#include<stdio.h>
#include<conio.h>
int main(){
	int num;
	printf("Enter a number:\n");
	scanf("%d",&num);
	if(num%2==0){
		printf("It is an even number.");
	}
	getch();
	return 0;
}
