#include<stdio.h>
int main(){
	int temp;
	printf("Enter the temperature:\n");
	scanf("%d",&temp);
	
	
	if(temp>=30){
		printf("It is hot outside\n");
	}
	else{
		printf("temperature is cool\n");
	}
	return 0;
}
