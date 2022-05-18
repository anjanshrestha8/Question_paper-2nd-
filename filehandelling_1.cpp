//string base input of output
//create a file
//open a file
//read a file
//delete file
/*#include<iostream>
#include<fstream>
using namespace std;
int main(){
	fstream FileName ;
	FileName.open("D:\OVER.txt",ios::out);
	if(!FileName){
		 cout<<"File creation failed";
    }
    else
    {
        cout<<"New file created";
        FileName<<"school";
        FileName.close(); 
    }
    return 0;
}*/
#include<iostream>
#include<fstream>
using namespace std;
int main(){
	fstream a;
	a.open("D:\OVER.txt",ios::in);
		if(!a){
		 cout<<"No such file";
    }
    else {
    	char ch;
    	while(1){
    		OVER>>ch;
    		cout<<ch;
    		if(OVER.eof){
    			break;
			}
		}
	}
	a.close();return 0;
	
}
