#include <iostream>
#include<string.h>
using namespace std;
  
int main()
{
    char str[500];
    int count=0, j=0, x;
    cout<<"Enter the String: ";
    gets(str);
    while(str[j])
    {
        count++;
        j++;
    }
    cout<<"\nLength = "<<count;
    return 0;
}
