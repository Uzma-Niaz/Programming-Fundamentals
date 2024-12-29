#include<iostream>
using namespace std;
int main(){
int num1 , num2;
char operation;
	cout<<"Enter your first number :";
	cin>>num1;
	cout<<"Enter your second number : ";
	cin>>num2;
	cout<<"Enter operation you want to perform(+,-,/,*)";
	cin>>operation;
	switch(operation){
		case '+' :
			cout<<num1+num2;
			break;
			
	    case '-':
	    	cout<<num1-num2;
	    	break;
	    	
	    case '*':
	    	cout<<num1*num2;
	    	break;
	    	
	    case '/':
	    	cout<<num1/num2;
	    	break;
	}
	
	
	
	
	
	return 0;
}
