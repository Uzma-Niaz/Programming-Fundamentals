#include <stdio.h>
#include <conio.h>
int main(){
	int age;
	printf("Enter Your Age:\n");
	scanf("%d",&age);//nested if ki dono conditions true honi chaiye hai
	if(age > 18){
		printf("Your Age is greater than 18\n");
		if(age<=50){
			printf("Your Age is less than 50\n");
		}
		
	}
	else{
		printf("Your Age is less than 18\n");
	}
}
