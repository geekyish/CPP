#include<iostream>
using namespace std;
class complex
{
int real,imag;
public:
void set()
{
cout<<"Enter real and imaginary part: ";
cin>>real>>imag;
}
friend complex sum(complex,complex);
void display();
};
void complex::display()
{
cout<<"The sum of complex number is: "<<real<<"+"<<imag<<"i";
}
complex sum(complex n1,complex n2)
{
complex t;
t.real=n1.real+n2.real;
t.imag=n1.imag+n2.imag;
return t;
}
int main()
{
complex n1,n2,result;
n1.set();
n2.set();
result=sum(n1,n2);
result.display();
return(0);
}