#include<iostream>
using namespace std;
int main()
{
    int n,rem,reverse=0,flag,a;
    cout<<"Enter a number: ";
    cin>>n;
    a=n;
    while(n!=0)
    {
        
        rem=n%10;
        reverse=reverse*10+rem;
        n=n/10;
        
    }
    cout<<reverse<<endl;
    cout<<a<<endl;
    if (a==reverse)
        flag=1;
    if (flag==1)
        {
        cout<<"It is a palindrome number";
        }
    else
    {
        cout<<"It is not a palindrome number";
    }
 

    return 0;
}
