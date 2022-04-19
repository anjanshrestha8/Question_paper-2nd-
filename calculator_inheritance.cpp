#include<iostream>
using namespace std;
class Calculate{
	public:
		int a,b;
		void getData(){
			cout<<"Enter the data u want to calculate."<<endl;
			cin>>a>>b;
		}
		
};
class As:public Calculate{
	public:
		void addition(){
			int sum = a+b;
			cout<<"The addition is :-"<<sum<<endl;
	}

		void sub(){
			int subs=a-b;
			cout<<"The subtraction is :-"<<subs<<endl;
	}
};
class Md : public Calculate,public As{
	public:	
		void multiplication(){
			int mul =a*b;
			cout<<"The multiplication is :- "<<mul<<endl;
		}
	
		void division(){
			int div =a/b;
			cout<<"The divison is:-"<<div<<endl;
		}
	
};
int main(){
	As obj;
	obj.getData();
	obj.addition();
	obj.sub();
	obj.multiplication();
	obj.divi();
	return 0;
}
