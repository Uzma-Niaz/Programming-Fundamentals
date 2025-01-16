#include<iostream>
#include<string>
using namespace std;

void myFunc(){
	string str;
	cout<<"Enter your sentence: "<<endl;
	getline(cin,str);
	
		
	for(int i=0; str[i] !='\0';i++){
		
	if(str[i]>='A' && str[i]<='Z'){
		str[i]=str[i]+32;
	}
	else if(str[i]>='a' && str[i]<='z'){
		str[i]=str[i]-32;
	}
	}
	cout<<"The converted sentence is: "<<str;

	
}



int main(){

myFunc();
return 0;
}
