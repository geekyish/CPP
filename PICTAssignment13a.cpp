#include <iostream>
using namespace std;
 
class Time
{
    public:
    int secs=0,hrs,mins;

void set()
{
    cout<<"Enter time in seconds: ";
    cin>>secs;
}
void convert()
{
    hrs=secs/3600;
    mins=(secs/60)%60;
    secs=secs%60;
    
}
void get()
{
    cout<<hrs<<" : "<<mins<<" : "<<secs<<endl;
}
};
int main()
{
    Time t;
    t.set();
    t.convert();
    t.get();
    return 0;
}
