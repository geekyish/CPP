#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter number 'a' : ";
    cin>>a;
    cout<<"Enter number 'b' : ";
    cin>>b;
    cout<<"Before swapping : "<<"a : "<<a<<" ,b : "<<b<<endl;
    b=b+a;
    a=b-a;
    b=b-a;
    cout<<"After swapping : "<<"a : "<<a<<" ,b : "<<b<<endl;
    return 0;
}
