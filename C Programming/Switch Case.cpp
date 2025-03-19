#include <stdio.h>
#include <conio.h>
int main(){
	int num;
	printf("Enter Number from 1-7:\n");
	scanf("%d",&num);
	 switch (num){
	 	case 1:
	 		
	 		printf("Monday");
	
	 		break;
	 		
	 			case 2:
	 		
	 		printf("Tuesday");
	
	 		break;
	 		
	 			case 3:
	 		
	 		printf("wednesday");
	
	 		break;
	 			case 4:
	 		
	 		printf("Thursday");
	
	 		break;
	 			case 5:
	 		
	 		printf("Friday");
	
	 		break;
	 		
	 			case 6:
	 		
	 		printf("Saturday");
	
	 		break;
	 		case 7:
	 		
	 		printf("Sunday");
	
	 		break;
	 		
	 
	 default:
	 	printf("invalid number");
	 }
	 
	
	
	getch();
	return 0;
}
	
