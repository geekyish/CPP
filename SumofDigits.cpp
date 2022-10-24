#include<iostream>
using namespace std;

int main()
{
    int n,a=0,rem;
    cout<<"Enter any number: ";
    cin>>n;
    while (n>0)
    {
        rem=n%10;
        a= a+rem;
        n=n/10;
        
           
     }
    cout<<"The Sum of the Digits is "<<a<<endl;
    return 0;
}
