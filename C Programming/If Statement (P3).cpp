#include<stdio.h>
#include<conio.h>
int main(){
	int age;
	printf("Enter your age:\n");
	scanf("%d",&age);
	if(age>=18){
		printf("You are an adult");
	}
	getch();
	return 0;
}
