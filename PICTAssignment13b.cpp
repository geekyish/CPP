#include<iostream>
using namespace std;
class Student
{
    public:
    float roll,m1,m2,m3,m4,m5,total=0,per,a;
    string name;

void getdetails()
{
    cout<<"Enter your name: ";
    cin>>name;
    cout<<"Enter roll no.: ";
    cin>>roll;
    cout<<"Enter English marks(out of 100): ";
    cin>>m1;
    cout<<"Enter Maths marks(out of 100): ";
    cin>>m2;
    cout<<"Enter Physics marks(out of 100): ";
    cin>>m3;
    cout<<"Enter Chemistry marks(out of 100): ";
    cin>>m4;
    cout<<"Enter Biology marks(out of 100): ";
    cin>>m5;
} 
void percentage()
{
    total=m1+m2+m3+m4+m5;
    a=(total/500); 
    per=a*100;
} 
void display()
{
    cout<<"Name: "<<name<<endl;
    cout<<"Roll no.: "<<roll<<endl;
    cout<<"English Marks(out of 100): "<<m1<<endl;
    cout<<"Maths Marks(out of 100): "<<m2<<endl;
    cout<<"Physics Marks(out of 100): "<<m3<<endl;
    cout<<"Chemistry Marks(out of 100): "<<m4<<endl;
    cout<<"Biology Marks(out of 100): "<<m5<<endl;
    cout<<"Total Marks obtained: "<<total<<endl;
    cout<<"Percentage: "<<per<<endl;
}  
};
int main()
{
    Student s;
    s.getdetails();
    s.percentage();
    s.display();
    return 0;
}