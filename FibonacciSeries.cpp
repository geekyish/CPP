#include<iostream>
using namespace std;
int main()
{
    int n1=0, n2=1, sum, n,i;
    cout<<"Enter number of elements: ";
    cin>>n;
    cout<<n1<<endl;
    cout<<n2<<endl;
    for (i=2;i<n;++i)
    {
    sum=n1+n2;
    n1=n2;
    n2=sum;
    cout<<sum<<endl;
    }
    
    return 0;
}


