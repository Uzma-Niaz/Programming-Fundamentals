#include<iostream>
using namespace std;
int main(){
	cout<<"Start the program"<<endl;
	goto jump;
	cout<<"This line is skipped"<<endl;
	jump:
	cout<<"Jumped to this line!"<<endl;
	return 0;
		
}
