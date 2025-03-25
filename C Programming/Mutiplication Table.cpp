#include<stdio.h>
#include<conio.h>
int main(){
	int table,limit;

	printf("Enter your table:\n");
	scanf("%d",&table);
	printf("Enter your table limit:\n");
	scanf("%d",&limit);
	
	int i = 1;
	while (i<=limit){
		printf("%d x " "%d = %d\n",table,i,table*i );
		i++;
	}

	}
	
	
	
	
	
	

