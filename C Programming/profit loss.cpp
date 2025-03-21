#include<stdio.h>
#include<conio.h>
int main(){
	int cp, sp;
	printf("Enter the cost price\n");
	scanf("%d",&cp);
	printf("Enter the selling price\n");
	scanf("%d",&sp);
	
	if(sp>cp){
		printf("Seller had made profit\n");
	}
	else if(cp==sp){
		printf("Neither profit not loss\n");
	}
	else{
		printf("Seller had made loss\n");
	}
	getch();
	return 0;
}
