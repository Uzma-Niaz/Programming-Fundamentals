#include<iostream>
#include<string.h>
using namespace std;
struct students {
	char name[50];
	int rollNumber;
	float marks[3];
}uzma;
//students uzma;
void addStudent() {
	cout << "Enter your name: ";
	cin.getline(uzma.name,50);
	cout << "Enter your roll number: ";
	cin >> uzma.rollNumber;
	for (int i = 0; i <= 2; i++)
	{
		cout << " Enter your "  << i + 1 <<  " marks ";
		cin >> uzma.marks[i];
	}
 }
void displayStudents(){
	cout << "** Display Student Data**"<<endl;
	cout << "Your Name is : " << uzma.name << endl;
	cout << "Your rollNumber is : " << uzma.rollNumber << endl;
	for (int i = 0; i <= 2; i++)
	{
		cout << "Your  " << i + 1 << "  marks is ";
		cout << uzma.marks[i] << endl;
	}
	
}
void sum()
{
	cout << endl;
	int sum = 0;
	for (int i = 0; i <= 2; i++)
	{
		sum = sum + uzma.marks[i];
	}
	cout << "Your Total Marks is :" << sum;
}
int main()
{
	
	addStudent();
	displayStudents();
	sum();
	return 0;
}
