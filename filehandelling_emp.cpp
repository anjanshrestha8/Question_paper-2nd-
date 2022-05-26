#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<fstream>
using namespace std;
class X{
	public:
		int id;
		int salary;
		string name;
		string position;
		void put();
		void get();
		void switch_case();
}; X obj;
void X::put(){
	fstream File;
	File.open("emp.dat",ios::out|ios::app);
	cout<<"Enter the id of the employee";
	cin>>id;
	fflush(stdin);
	cout<<"Enter the name of the employee";
	getline(cin,name);
	fflush(stdin);
	cout<<"Enter the position of the employee";
	getline(cin,position);
	fflush(stdin);
	cout<<"Enter the salary of the employee";
	cin>>salary;
	fflush(stdin);
	File.write((char*)this,sizeof(X));
	File.close();
	obj.switch_case();
} 
void X::get(){
	int temp;
	cout<<"Enter the id of the employee u want to get information";
	cin>>temp;
	fstream.File1;
	File1.open()
}
void X::switch_case(){
	int i;
	cout<<"Enter the your choice.\n1.Write\n2.Read\n3.Exit";
	cin>>i;
	switch(i)
	{
		case(1):
			obj.put();
			break;
		case(2):
			obj.get();
			break;
		case(3):
			exit(0);
		default:
			cout<<"Invalid case";
	}
}
int main(){
	
	obj.switch_case();

	return 0;
}
