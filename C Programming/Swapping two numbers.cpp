#include<stdio.h>
#include<conio.h>
int main(){
	
int num1, num2;

printf("Enter number one:\n");
scanf("%d",&num1);
printf("Enter number two:\n");
scanf("%d",&num2);

printf("Before Swapping: \n");
printf("The value of number one before swapping is:  %d\n",num1);
printf("The value of number two before swapping is: %d\n",num2);


int temp = num1;
num1 = num2;
num2 = num1;

printf("After Swapping:\n");
printf("The value of number one after swapping is: %d\n",num1);
printf("The value of number two after swapping is: %d\n",num2);

getch();
return 0;	
}
