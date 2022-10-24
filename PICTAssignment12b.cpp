#include<iostream>
using namespace std;
class A
{
    public:
    float roll=0,m1,m2,m3,m4,m5,sum;
    float avg;
    string name;
    void set()
    {
        cout<<"Enter your name: ";
        cin>>name;
        cout<<"Enter your roll no.: ";
        cin>>roll;
        cout<<"Enter English Marks: ";
        cin>>m1; 
        cout<<"Enter Maths Marks: ";
        cin>>m2; 
        cout<<"Enter Physics Marks: ";
        cin>>m3; 
        cout<<"Enter Chemistry Marks: ";
        cin>>m4; 
        cout<<"Enter Biology Marks: ";
        cin>>m5;
        
    }
friend float B(A);

void display()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Roll no.: "<<roll<<endl;
        cout<<"English Marks: "<<m1<<endl;
        cout<<"Maths Marks: "<<m2<<endl;
        cout<<"Physics Marks: "<<m3<<endl;
        cout<<"Chemistry Marks: "<<m4<<endl;
        cout<<"Biology Marks: "<<m5<<endl;
          
    } 
};
float B(A t)
    {
        t.sum=t.m1+t.m2+t.m3+t.m4+t.m5;
        t.avg=t.sum/5;
        cout<<"The average marks obtained are: "<<t.avg<<endl;
        return t.avg;
    }
int main()
{
    A a;
    a.set();
    a.display();
    B(a);
    return 0;
}