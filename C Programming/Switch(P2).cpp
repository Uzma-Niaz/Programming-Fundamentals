#include<stdio.h>
#include<conio.h>
int main(){
	char ch;
	printf("Enter any character from A, B, C:\n");
	scanf("%c",&ch);
	
	switch(ch){
		case 'A':
			printf("Apple");
			break;
			case 'B':
			printf("Banana");
			break;
			case 'C':
			printf("Cherry");
			break;
		
			default:
				printf("Invalid Input");
	}
	
	getch();
	return 0;
	
}
