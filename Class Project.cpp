#include<iostream>
using namespace std;
struct students{
	char name[20];
	int id;
	int marks[5];
}; 

int udf2(int min){
	int max,sum;
	students student2;
	max=student2.marks[0];
	for (int i=1;i>=4;i++){
		if(max > student2.marks[i]){
			max=student2.marks[i];
		}
	}
	sum=max+min;
	return sum;
}

int udf1(struct students std1){
	
	int min;
	min = std1.marks[0];
	for (int i=1;i<=4;i++){
		if(min < std1.marks[i]){
			min=std1.marks[i];
		}
	}
   int sum2 = udf2(min);
   return(sum2);
	
	
}




int main(){
   struct students student1;
   	cout<<"Enter your name"<<endl;
   	cin>>student1.name;
   	cout<<"Enter your id"<<endl;
   	cin>>student1.id;
   	for(int i=0;i<=4;i++){
   		cout<<"Enter your marks"<<i+1<<endl;
   		cin>>student1.marks[i];
	   }
	   
	
	cout << udf1(student1);
	   
	   
	   
	return 0;
}
