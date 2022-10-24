#include<iostream>
using namespace std;
int main()
{
    int j,n,flag;
    cout<<"The Prime Numbers from 0 to 50 are as follows:";
    for (n=1;n<=50;n++)
    {
        if (n==0||n==1)
        continue;
    flag=1;
    for (j=2;j<=n/2;j++)
    {
         if(n%j==0)
         {
            flag = 0;
            break;
         }
    }
    
        if (flag==1)
        cout<<n<<" ";         
    
    }
    return 0;
}
