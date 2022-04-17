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
            cout<<"Enter the account number."<<endl;
            cin>>account_num;
            cout<<"Enter the balance."<<endl;
            cin>>balance;
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
                static int rate2=10;
                int time1;
                int bala;
                cout<<"Enter the time this plan in year."<<endl;
                cin>>time1;
                bala=balance*pow((1+rate2/100),time);
                bala=balance+bala;
                cout<<"The total amount of money in the Current Account is :-"<<bala<<endl;
            }
};
class Saving : public Acc{
    public:
         void calculateSI(){
            static int rate1=5;
            int time;
            int bal;
            cout<<"Enter the time this plan in year."<<endl;
            cin>>time;
            bal=balance+(balance*time*rate1);
            cout<<"The total amount of money in the Saving Account is :-"<<bal<<endl;
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