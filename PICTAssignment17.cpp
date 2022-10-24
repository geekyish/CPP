#include<iostream>
using namespace std;
class Operation
{
    float n1,n2;
    public:
    void getdata();
    void display();
    Operation operator *(Operation);
    int operator ==(Operation);
};
void Operation :: getdata()
{
                cout<<"Enter values of n1 and n2:"<<endl;
                cin>>n1>>n2;
}

void Operation :: display()
{
                cout<<"n1="<<n1<<endl<<"n2="<<n2<<endl;
}
Operation Operation :: operator *(Operation o1)
{
                Operation o2;
                o2.n1=n1*o1.n1;
                o2.n2=n2*o1.n2;
                return o2;
}
int Operation ::operator ==(Operation o1)
{
                if((n1==o1.n1)&&(n2==o1.n2))
                                return 1;
                else
                                return 0;
}
int main()
{
    int ch;
    Operation o1,o2,o3;
    cout<<"First object :"<<endl;
    o1.getdata();
    cout<<"Second object :"<<endl;
    o2.getdata();
    o3=o1*o2;
    cout<<"Third object :"<<endl;
    o3.display();
    if(o1==o2)
    {
        cout<<"Objects are equal!"<<endl;
    }
    else
    cout<<"Objects are not equal!"<<endl;
    return 0;
}