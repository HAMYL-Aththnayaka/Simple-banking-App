#include <iostream>
#include<iomanip>
using namespace std;

void showBalance(double balance)
{
    cout<<"Your balance is: Rs."<<std::setprecision(2)<<std::fixed<<balance<<endl;
}

double deposit()
    {
    double amount=0;
    cout<<"Enter Deposit Amount:";
    cin>>amount;
    if(amount>0)
    {
      return amount;
    }
    else
    {
        cout<<"Invalid Amount!"<<endl;
        return 0;
    }
    cout<<endl;
}

double withdrawal(double balance)
{
    double amount=0;
    cout<<"Enter Withdrawal Amount:";
    cin>>amount;
    if(balance>amount)
    {
         if(amount>0)
        {
          return amount;
        }
        else
        {
            cout<<"Invalid Amount!"<<endl;
            return 0;
        }
    }
    else
    {
        cout<<"Insufficient Account Balance!"<<endl;
        return 0;
    }
}

int main()
{
    double balance=0;
    int choice;
    do
    {
    cout<<"Enter your Choice: "<<endl;
    cout<<"1.Show Blance"<<endl;
    cout<<"2.deposit Money"<<endl;
    cout<<"3.Withdraw Money"<<endl;
    cout<<"4.Exit"<<endl;
    cin>>choice;

    std::cin.clear();
    fflush(stdin);

    switch(choice)
    {
    case 1:
        showBalance(balance);
        break;
    case 2:
        balance=balance+deposit();
         showBalance(balance);
        break;
    case 3:
        balance=balance-withdrawal(balance);
         showBalance(balance);
        break;
    case 4:
        cout<<"Thanks for Visiting!";
        break;
    default:
        cout<<"Invalid Choice"<<endl;

    }
    }
    while(choice!=4);


return 0;
}

