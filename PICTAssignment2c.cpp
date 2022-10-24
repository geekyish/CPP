#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter two numbers: ";
    cin>>a>>b;
    if(a<b)
    c=a;
    else
    c=b;
    while(1)
    {
        if((a%c==0)&&(b%c==0))
        break;
        else
        c--;
    }
    cout<<"\nHCF("<<a<<","<<b<<")="<<c;
    if(a>b)
    c=a;
    else
    c=b;
    while(1)
    {
        if((c%a==0)&&(c%b==0))
        break;
        else
        c++;
    }
    cout<<"\nLCM("<<a<<","<<b<<")="<<c;
}