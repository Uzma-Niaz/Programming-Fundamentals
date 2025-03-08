#include<stdio.h>
#include<conio.h>
int main(){
	int pa,roi,t,si;
	printf("Enter the principal interest: \n");
	scanf("%d",&pa);
	printf("Enter the rate of interest: \n");
	scanf("%d",&roi);
	printf("Enter the time: \n");
	scanf("%d",&t);
	si= (pa*roi*t)/100;
	printf("The simple interest calculated is: %d",si);
	
	
	
	
	
}
