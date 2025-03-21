#include<stdio.h>
int main(){
	int num;
	printf("Enter any number:\n");
	scanf("%d",&num);
	
	
	if(num%5==0){
		printf("It is divisible by 5\n");
	}
	else{
		printf("Number is not divisible by 5",num);
	}
	return 0;
}
