#include<iostream>
using namespace std;
class Assignment1
    {
      
       public : string username;
        public : string password;
       void printusername()
       {
           cout<< "Enter username : "<<username;
           cin>>username;
       }
      
       void printpassword()
       {
           cout<< "Enter password : "<<password;
           cin>>password;
       }
    };
    
    int main()
{
    Assignment1 obj1;
    obj1.username;
    obj1.password;
    obj1.printusername();
    obj1.printpassword();
    if(obj1.username == "user" && obj1.password == "pwd")
    {
        cout<<"Successful";
    }
    else
    {
        cout<<"Unsuccessful";
    }
   
    return 0;
}