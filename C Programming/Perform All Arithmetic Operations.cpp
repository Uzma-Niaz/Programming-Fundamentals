#include<stdio.h>
#include<conio.h>
int main(){

int a, b, add, sub, multiply, divide, mod;

printf("Enter two numbers: ");
 scanf("%d %d", &a, &b);

add= a+b;
sub= a-b;
multiply= a*b;
divide= a/b;
mod= a%b;

printf("addition %d\n", add);
printf("subtraction %d\n", sub);
printf("multiplication %d\n", multiply);
printf("division %d\n", divide);
printf("modulus %d\n", mod);


getch();
return 0;
}
