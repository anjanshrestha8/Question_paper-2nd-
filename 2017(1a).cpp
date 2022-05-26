/* WAP to add 2 objects of a class using friend function. The class consists of hour and minute as data members input(), sum() and output() */
#include<iostream>
using namespace std;
class A{
    public:
        int hrs,min;
        friend A add(A obj3,A obj4);
        void input (){
             cout<<"Enter the value";
            cin>> hrs>> min;
        
        }
           
        void output(){
            cout<<"the sum of the given data is ";
            cout<<hrs<<":"<<min;
        }
};
A add(A obj3,A obj4){

    A a;
    a.hrs=obj3.hrs+obj4.hrs;
    a.min=obj3.min+obj4.min;
    return a;
}
int main(){
    A obj,obj1,obj2;
    obj.input();
    obj1.input();
    obj2=add(obj,obj1);
    obj2.output();
    return 0;

}