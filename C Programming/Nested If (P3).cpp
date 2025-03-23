#include<stdio.h>
#include<conio.h>
int main(){
	int age ;
	
	printf("Enter your age:\n");
	scanf("%d",&age);
	

	if(age>=18){
		if(age>60){
			printf("Senior Citizen");
		}
		if(age<60){
			printf("Adult");
		}
	}
	      
	getch();
	return 0;
}
