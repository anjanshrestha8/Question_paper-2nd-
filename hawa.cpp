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
        float balance=0;
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
            static float rate=10;
            float time1=0;
            float bala=0;
            cout<<"Enter the time this plan in year."<<endl;
            cin>>time1;
            //cout<<"rate"<<rate;
            bala=balance*pow((1+rate/100),time1);
            cout<<"The Compound Intrest of money in the Saving Account is:- "<<bala<<endl;
            bala=balance+bala;
            cout<<"The total amount of Compound Intrest is:-"<<bala<<endl;
            }
};
//float Current:: rate=10;
class Saving : public Acc{
    public:
         void calculateSI(){
            static float rate1=5;
            int time;
            float  bal;
            cout<<"Enter the time this plan in year."<<endl;
            cin>>time;
            bal=(balance*time*rate1)/100;
            cout<<"The total intrest of money in the Saving Account is:- "<<bal<<endl;
            bal=balance+bal;
            cout<<"The total intrest of money in the Saving Account is:- "<<bal<<endl;
        }

};
//float Saving :: rate1=10;
int main(){
    
    Saving obj;
    Current obj1;
    int a;
    a=obj.choose();
    if(a==1){
        a=obj.getData();
        obj.calculateSI();
    }
    else if(a==2){
        a=obj1.getData();
        obj1.calculateCI();
    }
    else{
        cout<<"The choice is invalid"<<endl;
    }
    return 0;
    
}