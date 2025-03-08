#include<iostream>
using namespace std;
int main(){
	int a,b,c;
	cout<<"Enter three numbers: "<<endl;
	cin>>a>>b>>c;
	
	if(a>b && a>c){
		cout<<a<< " is the greatest number";
	}
    else if(b>a && b>c){
    	cout<<b<<" is the greatest number";
	}
	else{
	cout<<c<<" is the greatest";
}
	
	
	
	
}

