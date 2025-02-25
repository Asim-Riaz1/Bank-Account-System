#include <iostream>
using namespace std;
class bankAccount
{
    private:
    int accountNumber;
    double balance = 0;
    public:
    void setBalance(double b)
    {
        balance = b;
    }
    double getBalance()
    {
        return balance;
    }
    void setAccountNumber(double a)
    {
        accountNumber = a;
    }
    double getAccountNumber()
    {
        return accountNumber;
    }
    void withdrawMoney()
    {
        double moneyWithdrawn;
        cout<<"Enter the amount you would like to withdraw: ";
        cin>>moneyWithdrawn;
        if (moneyWithdrawn<=balance, moneyWithdrawn>0)
        {
            balance = balance - moneyWithdrawn;
            cout<<"You have successfully withdrawn "<<'$'<<moneyWithdrawn<<"."<<" Your new balance is "<<'$'<<balance<<endl;
        }
        else if (moneyWithdrawn>balance)
        {
            cout<<"You have insufficient funds. "<<endl;
        }
        if (moneyWithdrawn<0)
        {
            cout<<"Invalid input."<<endl;
        }
        
        
    }
    void depositMoney()
    {
        double depositedMoney;
        cout<<"Enter the amount of money you would like to deposit: ";
        cin>>depositedMoney;
        if (depositedMoney > 0)
        {
            balance = balance + depositedMoney;
            cout<<"You have successfully deposited "<<'$'<<depositedMoney<<"."<<" Your new balance is "<<'$'<<balance<<endl;
        }
        else
        {
            cout<<"Invalid input."<<endl;
        }
        

    }
    void showBalance()
    {
        cout<<"Your current balance is "<<'$'<<balance<<endl;
    }


};
int main()
{
    int accountNumber;
    
    int choice;
    bankAccount bankAccount1;
    bankAccount1.setBalance(0);
    int correctAccountNumber = 123456;
    do
    {
    cout<<"Enter your account number: ";
    cin>>accountNumber;
    if (accountNumber != correctAccountNumber)
    {
        cout<<"You have entered the incorrect account number."<<endl;
    }
    }while (accountNumber != correctAccountNumber);
    

    if (accountNumber == correctAccountNumber)
    {
    bankAccount1.setAccountNumber(accountNumber);
    do
    {
    cout<<"********* Welcome to AR Bank *********"<<endl;
    cout<<"Enter your choice."<<endl;
    cout<<"1: Show Balance"<<endl;
    cout<<"2: Deposit money"<<endl;
    cout<<"3: Withdraw money"<<endl;
    cin>>choice;
    switch (choice)
    {
    case 1: bankAccount1.showBalance(); break;
    case 2: bankAccount1.depositMoney(); break;
    case 3: bankAccount1.withdrawMoney(); break;
    
    default: cout<<"Wrong choice."<<endl; break;
    }
    }while (choice >= 3, choice != 0);

    }
    cin.ignore();
    cin.clear();
    
}
