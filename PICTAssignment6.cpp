#include<iostream>
using namespace std;


class person
{
public:
 void  printdetails(string name,string city,string state,string address, string country="India")
{
   cout<<"name : "<<name<<endl;
   cout<<"city : "<<city<<endl;
   cout<<"state : "<<state<<endl;
   cout<<"address : "<<address<<endl;
   cout<<"country : "<<country<<endl;
   
}
};
int main()
{
    string name,city,state,address,country;
    cout<<"Enter your name: "<<endl;
    cin>>name;
    cout<<"Enter your city: "<<endl;
    cin>>city;
    cout<<"Enter your state: "<<endl;
    cin>>state;
    cout<<"Enter your address: "<<endl;
    cin>>address;
    person obj;
    obj.printdetails(name,city,state,address);

    return 0;
}