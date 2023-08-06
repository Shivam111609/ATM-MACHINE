#include<iostream>
using namespace std;
class ATM{
    private:
    int balance;
    public:
    ATM(int bal){
        balance=bal;

    }
    int getBalance(){
        return balance;

    }
    int withdraw(int amount){
        if(amount>balance){
            return false;
        }
        balance=balance-amount;
        return true;

    }
    void deposit(int amount){
        balance=balance+amount;

    }
};
int main(){
    int choice,amount,success;
    char op;
    ATM atm(1000);
    do{
        system("cls");
    cout<<"1. View Balance"<<endl;
    cout<<"2. Cash Withdrawl"<<endl;
    cout<<"3. Cash Deposit"<<endl;
    cout<<"4. Exit"<<endl;
    cout<<" Enter Your choice :";
    cin>>choice;
    switch(choice){
        case 1:
        cout<<"Your  Available balance :"<<atm.getBalance()<<endl;;
        break;
        case 2:
        cout<<"Your Balance :"<<atm.getBalance();
        cout<<"Enter thr Amount to Withdraw :";
        cin>>amount;
        success=atm.withdraw(amount);
        if(success){
            cout<<" withdraw Successfull....."<<endl;
        }
        else{
            cout<<" Insufficient Balance......"<<endl;
        }
        break;
        case 3:
        cout<<" Enter the Amount To Deposit :";
        cin>>amount;
        atm.deposit(amount);
        cout<<"Deposit Successful...."<<endl;
        case 4:
        cout<<" Thanks for using ATM"<<endl;
        break;
        default:
        cout<<" Invalid Choice"<<endl;
    }
     cout<<" Do You Want to Try Another [yes/No] :";
     cin>>op;

    }while(op=='y'||op=='y');
}
