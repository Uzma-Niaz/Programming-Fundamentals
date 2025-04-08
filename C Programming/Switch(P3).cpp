#include<stdio.h>
#include<conio.h>
int main(){
	int num1, num2;
	char op;
	printf("Enter any number and operator to perform calculation:");
	scanf("%d %c %d",&num1, &op, &num2);
	
	switch(op){
		case '+':
			printf("%d", num1+num2);
			break;
			case '-':
			printf("%d", num1-num2);
			break;
			case '*':
			printf("%d", num1*num2);
			break;
			case '%':
			printf("%d", num1%num2);
			break;
			case '/':
				printf("%d",num1/num2);
				default:
					printf("Invalid");
	}
	
	getch();
	return 0;
	
}
