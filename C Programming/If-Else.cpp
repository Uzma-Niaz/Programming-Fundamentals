#include <stdio.h>
#include <conio.h>
int main(){
	int age;
	printf("Enter Your Age:\n");
	scanf("%d",&age);
	if(age > 18){
		printf("Your Age is greater than 18");
	}
	else{
		printf("Your Age is less than 18");
	}
}
