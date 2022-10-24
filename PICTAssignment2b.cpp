#include<iostream>
using namespace std;
int main()
{
    int i,j;
    bool a;
    cout<<"The prime numbers from 1 to 20 are : ";
for(i=1;i<20;i++)
{
        if(i==1)
        {
        continue;
        }
     a = true;
    for(j=2;j<=i/2;j++)
    {
        if(i%j==0)
        {
            a=false;
            break;
        }
    }
    if(a)
    cout<<i<<" ";
}
    return 0;
}