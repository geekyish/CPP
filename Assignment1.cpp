#include<iostream>
using namespace std;
class Assignment1
    {
      
        public : string username;
        public : string password;
      void validateuser()
      {
           cout<< "Enter username : "<<username;
           cin>>username;
           cout<< "Enter password : "<<password;
           cin>>password;
            if(username == "user" && password == "pwd")
            {
                 cout<<"Successful";
            }
            else
            {
            cout<<"Unsuccessful";
            }
      }
    };
    
    int main()
{
    Assignment1 obj;
   obj.validateuser();
  return 0;
}