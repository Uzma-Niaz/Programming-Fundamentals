#include<iostream>
using namespace std;

int myFunc(){
	int b;
	cout<<"How many digits you want to input(1-100): "<<endl;
	cin>>b;
		
	int num[b],min;
	for(int j=0;j<b;j++){
		cin>>num[j];
	}
	
	
         min=num[0];
    for(int i=0;i<3;i++){
    	if(num[i]<min){
    	min=num[i];
		}      
	} 
	return min;
}
int main(){
	
cout<<"Minimum is: "<<myFunc();	
	
	
	
}
