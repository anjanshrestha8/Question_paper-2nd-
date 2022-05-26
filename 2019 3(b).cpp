//WAP by creating a class named Employee with four data members(ID,name,position and salary)
//Using member functions initialize the data member for 3 objects and display information of
// all three of them.Assume apporipriate data types.
#include<iostream>
using namespace std;
class Employee{
    public:
        int ID;
        string name;
        string position;
        int salary;
        Employee(){
            cout<<"Enter the data of the employee";
            cout<<"Enter the ID of the employee";
            cin>>ID;
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
        }
};
int main(){
    
    int i=0;
    for(i=0;i<=2;i++){
        Employee obj[i];
    }
    
}