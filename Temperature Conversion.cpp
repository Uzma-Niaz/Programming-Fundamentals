#include<iostream>
using namespace std;
int main(){
    int temp, conversion;
	cout<<"1. farenheit to celcius\n2. celcius to farenheit"<<endl;
	cout<<"choose any (1 0r 2)";
	cin>>conversion;
	
	switch(conversion){
		case 1:
		cout<<"Enter the Temperature of the day in farenheit:";
	    cin>>temp;
		   cout<<"your temperature in celcius is : "<<(temp-32)*5/9;
		   break;
		case 2:
		   cout<<"Enter the Temperature of the day celcius:";
	       cin>>temp;
			cout<<"your temperature in farenheit is: "<<(temp*9/5)+32;
			break;
		
	}
	
	
	
	 
}

