#include<iostream>
#include<fstream>
using namespace std;
int main(){
	fstream a;
	a.open("D:Overxata.txt",ios::out);
	if(!a){
		cout<<"The file doesmnot exits";
	}
	else{
		cout<<"File is open";
		a<<"anjan shrestha";
		a.close();
	}
	return 0;
}
