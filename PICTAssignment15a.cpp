#include<iostream>
using namespace std;
class Visitor
{
    private:
    string a;
    public:
    Visitor(string a1)
    {
        a=a1;
    }
    string getvisitor()
    {
        return a;
    }
    Visitor()
    {
       cout<<"Unknown Visitor"<<endl; 
    }
};

int main()
{
    Visitor v("Joseph");
    cout<<"Welcome "<<v.getvisitor()<<"!"<<endl;
    Visitor v2;
    return 0;
}