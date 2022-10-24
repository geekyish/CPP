#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
int n;
cout<<"Enter a number:";
cin>>n;

    if (n<=1)
    cout<<"It is neither a prime nor a composite number";
    for(int i=2;i<n;i++)
    {
    if (n%2==0)
    cout<<"It is not a prime number";
    else 
    cout<<"It is a prime number";
    }
    return 0;
}






