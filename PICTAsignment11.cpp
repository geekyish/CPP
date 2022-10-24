#include<iostream>
#include <string>
using namespace std;

class Information
{
    int n1,n2,oldpin,newpin,amount=0,total=10000;
    string oldname,newname,type,branch;
    public:
    ~Information();
    void deposit()
    {
        int amount, avai_balance1;
        cout << "\nEnter amount to be Deposited\n";
        cin >> amount;
        avai_balance1 = total + amount;
        cout << "Available Balance is " << avai_balance1;
    }
    void withdrawl()
    {
        int a, avai_balance;
        cout << "Enter amount to withdraw\n";
        cin >> a;
        avai_balance = total - a;
        cout << "Available Balance is " << avai_balance;
    }
     void setvalue()
    {
        
        cout << "Enter old name\n";
        cin>>oldname;
        cout<<"Enter new name\n";
        cin>>newname;
        cout << "Enter old pin\n";
        cin>>oldpin;
        cout<<"Enter new pin\n";
        cin>>newpin;
        cout<<"Enter Account type(Savings/Current)\n";
        cin>>type;
    }
 
    void showdata()
    {
        cout << "Name:" << newname << endl;
        cout << "Account type:" << type << endl;
        cout << "Balance:" << total << endl;
        cout<<  "New pin:" <<newpin << endl;
    }
	
};

int main()
{
    int n1,a=12345678,n2,b=1111,choice;
    string oldname,newname,type,branch;
    Information p;
    cout<<"Please enter your account number:\n ";
    cin>>n1;
    cout<<"Enter your pin:\n ";
    cin>>n2;
    if(n1==a && n2==b)
    {
    while(1)
    {
    cout<<"\nWelcome to your account! Please select the operation you want to perform:\n1:Deposit Amount\n2:Withdraw Amount\n3:Update Information of your account\n4:Exit\n";
    cin>>choice;
    switch (choice)
    {
    case 1: 
            p.deposit();
            break;
    case 2: 
            p.withdrawl();
            break;
    case 3: p.setvalue();
            p.showdata();
            break;
    case 4:
            exit(1);

    default:
            cout << "\nInvalid choice\n";
            break;
    }
    
    }
    }
    else
    {
        cout<<"Invalid Account number or pin! Please enter again!";
    }
    
    return 0;
}