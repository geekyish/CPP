#include<iostream>
using namespace std;


int main()
{
    string type;
    string pin;
    int accountnumber,n,deposit;
    string accountholder, arr[10];
    cout<<"Enter Type of Bank Account(Simple/Joint) : "<<endl;
    cin>>type;
    if (type=="Joint")
        {
            cout<<"How many Account Holders? : "<<endl;
            cin>>n;
            for(int i=0;i<n;i++)
            {
                cout<<"Enter account holder name "<<i+1<<":"<<endl;
                cin>>arr[i];
            }  
            cout<<"Enter Account Number : "<<endl;
            cin>>accountnumber;
            cout<<"Enter Deposit Amount : "<<endl;
            cin>>deposit;
        }
        else
        {
            cout<<"Enter account holder name: "<<endl;
            cin>>accountholder;
            cout<<"Enter Account Number : "<<endl;
            cin>>accountnumber;
            cout<<"Enter Deposit Amount : "<<endl;
            cin>>deposit;
        }
       cout<<"Enter pin : ";
       cin>>pin;
 
  if(pin.length()>4 || pin.length()<4)
    {
        cout<<"Pin cannot be more than 4 digits..Enter again..!!";    
    }

    else
    {
        cout<<"Account Details are:"<<endl;
        if (type=="Joint")
        {
            cout<<"Account holder name(s) are : "<<endl;
            for(int i=0;i<n;i++)
            {
            cout<<arr[i]<<endl;
            }
        }
        else
        {
            cout<<"Account holder name: "<<accountholder<<endl; 
        } 
        cout<<"Account No. : "<<accountnumber<<endl;
        cout<<"Deposit Amount : "<<deposit<<endl;
    }   
    
    return 0;
}