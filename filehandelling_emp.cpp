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
	
	cout<<"Enter the id of the employee.\n";
	cin>>id;
	fflush(stdin);
	cout<<"Enter the name of the employee.\n";
	getline(cin,name);
	fflush(stdin);
	cout<<"Enter the position of the employee.\n";
	getline(cin,position);
	fflush(stdin);
	cout<<"Enter the salary of the employee.\n";
	cin>>salary;
	fflush(stdin);
	File.open("emp.dat",ios::out|ios::app);
	File.seekp(0,ios::beg);
	File.write((char*)this,sizeof(X));
	File.close();
	obj.switch_case();
} 
void X::get(){
	int temp;
	fstream File;
	cout<<"Enter the id of the employee u want to get information.\n";
	cin>>temp;
	File.open("emp.dat",ios::in);
	File.seekg(0,ios::beg);
	while(File.read((char*)this,sizeof(X)));
	{
		if(id==temp){
			cout<<"ID NO:-"<<id<<endl;
			cout<<"Employee Name:-"<<name<<endl;
			cout<<"Employee Position:-"<<position<<endl;
			cout<<"Employee's Salary:-"<<salary<<endl;
		}
	}
	File.close();
	obj.switch_case();
}
void X::switch_case(){
	int i;
	cout<<"Enter the your choice.\n1.Write\n2.Read\n3.Exit\n";
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
}//chrisanmagar@gmail.com
int main(){
	
	obj.switch_case();

	return 0;
}
