#include<iostream>
using namespace std;
int main()
{
    double a=0,b=0,result=0;
    int c=0;
    char ans;
    cout<<"Simple Calculator"<<endl;
    cout<<"Enter first number : "<<endl;
    cin>>a;
    cout<<"Enter second number : "<<endl;
    cin>>b;
    do
    {
    cout<<"Which operation you want to perform?"<<endl;
    cout<<"Enter your choice : \n1- Addition\n2-Subtraction\n3-Multiplication\n4-Division\n";
    cin>>c;
    switch (c)
    {
    case 1: result=a+b;
        break;
    case 2: result=a-b;
        break;
    case 3: result=a*b;
        break;
    case 4: result=a/b;
        break;    
    
    default:cout<<"Invalid choice! Please enter again";
        break;
    }
    cout<<"Result of the operation is : "<<result<<endl;
    cout<<"Do you want to continue?(Y/N)";
    cin>>ans;
    }while(ans=='Y'||ans=='y');
    return 0;
}