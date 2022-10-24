#include<iostream>
using namespace std;
class Box
{
    private:
    double length, width, breadth, volume;
    public:
    Box()
    {
        length=0;
        width=0;
        breadth=0;
        cout<<"The volume of box is : 0 "<<endl;
    }
    Box(double a)
    {
        length=a;
        width=a;
        breadth=a;
        volume=a*a*a;
        cout<<"The volume of box is : "<<volume<<endl;
    }
    Box(double l1,double w1,double b1)
    {
        length=l1;
        width=w1;
        breadth=b1;
        volume=l1*w1*b1;
        cout<<"The volume of box is : "<<volume<<endl;
    }
};
int main()
{
    Box b1;
    Box b2(4);
    Box b3(4.2,5.6,6.7);

    return 0;
}