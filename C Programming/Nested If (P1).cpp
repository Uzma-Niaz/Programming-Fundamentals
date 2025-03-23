#include<stdio.h>
#include<conio.h>
int main(){
	int num ;
	
	printf("Enter a number:\n");
	scanf("%d",&num);
	
	if(num>0){
		if(num%2==0){
			printf("The number is even");
		}
		else{
			printf("The number is odd");
		}
	}
	
	getch();
	return 0;
}
