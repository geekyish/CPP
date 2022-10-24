#include<iostream>
using namespace std;
class Animals
{
    public:
    virtual void sound()
    {
        cout<<"This is base class";
    }
};
class Dogs:public Animals
{
    public:
    void sound()
    {
        cout<<"Dogs bark"<<endl;
    }
};
class Cats:public Animals
{
    public:
    void sound()
    {
        cout<<"Cats meow"<<endl;
    }
};
int main()
{
    Animals *a1, *a2;
    Dogs d;
    a1 = &d;
    Cats c;
    a2 = &c;
    a1 -> sound();
    a2 -> sound();
    return 0;
}