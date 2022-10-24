#include<iostream>
using namespace std;
class Patient
{
private:
int heartRate;
double moneyOwed;
string name;
public:
Patient(int x1, double x2, string x3)
{
    heartRate=x1;
    moneyOwed=x2;
    name=x3;  
}
~Patient()
{
    cout<<"The details of patient are deleted!"<<endl;
}
int getHeartRate()
{
    return heartRate;
}
double getmoneyOwed()
{
    return moneyOwed;
}
string getname()
{
    return name;
}
};

int main()
{

    Patient p(74,200.5,"John");
    cout<<"Heart Rate : "<<p.getHeartRate()<<endl;
    cout<<"Money Owed : "<<p.getmoneyOwed()<<endl;
    cout<<"Name : "<<p.getname()<<endl;

    return 0;
}