#include<stdio.h>
#include<conio.h>
int main(){
	int days;
	printf("Enter any number from (1-7):\n");
	scanf("%d",&days);
	
	switch(days){
		case 01:
			printf("Monday");
			break;
			case 02:
			printf("Tuesday");
			break;
			case 03:
			printf("Wednesday");
			break;
			case 04:
			printf("Thursday");
			break;
			case 05:
			printf("Friday");
			break;
			case 06:
			printf("Saturday");
			break;
			default:
				printf("Sunday");
	}
	
	getch();
	return 0;
	
}
