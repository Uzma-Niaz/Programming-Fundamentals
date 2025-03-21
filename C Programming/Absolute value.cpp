#include<stdio.h>
#include<conio.h>
int main(){
	int num;
	printf("Enter any integar:\n");
	scanf("%d",&num);
	
	
	if(num>0){
		num=num*(-1);
		printf("is the absolute value %d",num);
	}
	else{
		printf("%d is the absolute value\n",num);
	}
	getch();
	return 0;
}
