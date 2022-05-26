//string base input of output
//create a file
//open a file
//read a file
//delete file*
#include<iostream>
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
}



#include<iostream>
#include<fstream>
using namespace std;
int main(){
	fstream a;
	a.open("D:overxata.txt",ios::in);
		if(!a){
		 cout<<"No such file";
    }
    else {
    	string ch;
    	if(a.is_open()){
			while(!a.eof())
			{
    	 		getline(a,ch);
    			cout<<ch;
    	
			}
		}
	}
	a.close();
	return 0;
}

