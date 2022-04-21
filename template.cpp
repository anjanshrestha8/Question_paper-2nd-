//wap to use ascending number using template.
#include<iostream>
using namespace std;
class Swap{
		template <typename T>
		void ass(T num,T getnum[]){
		
			T temp;
			int i=0,j=0;
			for(i=0;i<num;i++){
				for(j=i+1;j<num;j++){
					if(getnum[i]>getnum[j]){
						temp=getnum[i];
						getnum[i]=getnum[j];
						getnum[j]=temp;
					}
				}
			}
			cout<<"Ascending order:-";
			for(i=0;i<num;i++){
				cout<<getnum[i]<<endl;
			}
			
		}
};
int main(){
	Swap obj;
	int n,i,a[10];
	cout<<"Enter the total  no u want to enter "<<endl;
	cin>>n;
	cout<<"enter the numbers";
	for(i=0;i<n;i++){
		cin>>a[i];	
	}
	obj.ass<int>(n,a[i]);
	return 0;
}
