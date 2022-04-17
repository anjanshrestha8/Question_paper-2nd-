//Assume that a bank mainatains two kinds of accounts for customers, one called as saving account and the other as current account.
//The saving account provides compound intrest as the annual rate of 10%.
//Current account holders get simple intrest of 5% per year.
//Create a class account that stores customer namee and account number.
//From this, derive the classes: current_account and saving_account.
//Include necessary member functions and calculate the total amount of money in an account for both types of customers.
#include<iostream>
#include<math.h>
using namespace std;
class Acc{
    public:
        string customer_name;
        int account_num;
        int balance;
        int getData(){
            cout<<"Enter the details of the customer."<<endl;
            cout<<"Enter the name of the customer."<<endl;
            getline(cin,customer_name);
            fflush(stdin);
            cout<<"Enter the account number."<<endl;
            cin>>account_num;
            fflush(stdin);
            cout<<"Enter the balance."<<endl;
            cin>>balance;
            fflush(stdin);
            return 1;
        }
        int choose(){
            int b;
            cout<<"Choose the plan."<<endl;
            cout<<"1.Saving Account"<<endl;
            cout<<"2.Current Account"<<endl;
            cin>>b;
            return b;
        }
};
class Current : public Acc{
    public:
        void calculateCI(){
                static float rate2=10;
                int time1;
                float bala;
                int balaCI = balance;
                cout<<"Enter the time this plan in year."<<endl;
                cin>>time1;
                cout<<balaCI;
                bala=balance*pow((1+rate2/100),time1);
                /*bala=balance+bala;
                cout<<"The total amount of money in the Current Account is :-"<<bala<<endl;
                bala=balance*pow((1+rate2/100),time);
                bala=balance+bala;
                cout<<"The total amount of money in the Current Account is :-"<<bala<<endl;*/
            }
};
class Saving : public Acc{
    public:
         void calculateSI(){
            static float rate1=5;
            int time;
            float  bal;
            cout<<"Enter the time this plan in year."<<endl;
            cin>>time;
            bal=(balance*time*rate1)/100;
            cout<<"The total intrest of money in the Saving Account is :-"<<bal<<endl;
            bal=balance+bal;
            cout<<"The total intrest of money in the Saving Account is :-"<<bal<<endl;
        }

};
int main(){
    Saving obj;
    Current obj1;
    int a;
    a=obj.getData();
    a=obj.choose();
    if(a==1){
        obj.calculateSI();
    }
    else{
        obj1.calculateCI();
    }
    return 0;
    
}