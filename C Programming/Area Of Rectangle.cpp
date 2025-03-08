#include<stdio.h>
#include<conio.h>
int main(){
	
	int length,width, area;
	printf("Enter the length: \n");
	scanf("%d",&length);
	printf("Enter the width: \n");
	scanf("%d",&width);
	area = length * width;
	printf("The area is: %d",area);
	
	getch();
	return 0;
}
