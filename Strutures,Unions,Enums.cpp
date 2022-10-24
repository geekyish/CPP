#include<iostream>
using namespace std;


typedef struct employee
    {
        int eId;
        char favChar;
        float salary;
    }ep;
    
int main()
{
    ep harry;
    ep shubham;
    ep rohan;
    harry.eId=1;
    harry.favChar = 'c';
    harry.salary = 12000000;
    cout<<"The value is "<<harry.eId<<endl;
    cout<<"The value is "<<harry.favChar<<endl;
    cout<<"The value is "<<harry.salary<<endl;
    return 0;
}