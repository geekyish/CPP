#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    if(n>0)
    {
        if(n%2==0)
        {
        cout<<"It is a positive even number!";
        }
        else
        {
            cout<<"It is a positive odd number!";
        }
    }
    else
    {
        cout<<"It is a negative number!";
    }
    return 0;
}