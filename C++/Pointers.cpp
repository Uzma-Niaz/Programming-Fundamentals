#include<iostream>
using namespace std;
void swap( int *a,int *b ){

	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}


int main(){
	int x=10;
	int y=20;
	cout<<"Before Swapping "<<endl;
	cout<<x<<endl<<y<<endl;
	swap(&x,&y);
	cout<<"After Swapping"<<endl;
	cout<<x<<endl<<y;
}
