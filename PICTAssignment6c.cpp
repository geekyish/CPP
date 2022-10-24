#include<iostream>
using namespace std;
void swap(int &ix,int &iy);
void swap(float &fx,float &fy);
void swap(int &a,int &b)
{
int temp;
temp=a;
a=b;
b=temp;
}
void swap(float &a, float &b)
{
float temp;
temp=a;
a=b;
b=temp;
}
int main()
{
    int ix,iy;
    float fx,fy;
    cout<<"Enter 2 integers:";
    cin>>ix>>iy;
    cout<<"Enter 2 floating point no:s:";
    cin>>fx>>fy;
    cout<<"\nIntegers:";
    cout<<"\nix="<<ix<<"\niy="<<iy;
    swap(ix,iy);
    cout<<"\nAfter swapping";
    cout<<"\nix="<<ix<<"\niy="<<iy;
    cout<<"\nFloating point no:s";
    cout<<"\nfx="<<fx<<"\nfy="<<fy;
    swap(fx,fy);
    cout<<"\nAfter swapping";
    cout<<"\nfx="<<fx<<"\nfy="<<fy;
    return 0;
}