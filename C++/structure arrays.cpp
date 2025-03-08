#include<iostream>
#include<string>
using namespace std;
struct students {
	int id;
	char name[30];
	float cgpa;
	int marks[7];
};
struct students std1;

void student1(struct students std2){
	cout<<"STUDENT NO.1"<<endl;
	cout<<"your Id is: ";
	cout<< std1.name;
	cout<<"your Name is: ";
	cout<< std1.name;
	cout<<"your Cgpa is: ";
	cout<< std1.cgpa;
	cout<<"STUDENT NO.2"<<endl;
	cout<<"your Id is: ";
	cout<< std1.name;
	cout<<"your Name is: ";
	cout<< std1.name;
	cout<<"your Cgpa is: ";
	cout<< std1.cgpa;
}



int main(){
	cout<<"Enter your Id: ";
	cin>>std1.name;
	cout<<"Enter your Name: ";
	cin>>std1.name;
	cout<<"Enter your Cgpa: ";
	cin>> std1.cgpa;
    for(int i=0;i<=6;i++){
    	cout<<"Enter your " <<i+1<< " marks: ";
    	cin>> std1.marks[i];
	}
	
	struct students std2;
	cout<<"Enter your Id: ";
	cin>> std2.name;
	cout<<"Enter your Name: ";
	cin>> std2.name;
	cout<<"Enter your Cgpa: ";
	cin>> std2.cgpa;
    for(int i=0;i<=6;i++){
    	cout<<"Enter your " <<i+1<< " marks: ";
    	cin>> std2.marks[i];
	}
	student1(std2);
	
	
	
}
