#include<iostream>
#include<fstream>
using namespace std;
int main(){
	fstream a;
	a.open("D:overxata.txt",ios::in);
	if(!a){
		cout<<"File doesnot exits";
	}
	else{
		string b;
		if(a.is_open()){
			while(!a.eof()){
				getline(a,b);
				cout<<b;
			}
		}
	}
	a.close();
	return 0;
	}
