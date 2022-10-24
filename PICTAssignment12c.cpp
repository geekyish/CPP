#include<iostream>
using namespace std;
class DM
{
    public:
    double meter,centimeter;
};
class DB
{
    public:
    double feet,inches;
    friend void add(DM,DB);
};
void add(DM dm,DB db)
    {
        double sum1,sum2;
        cout<<"Enter Distance in meter and cemtimeter: "<<endl;
        cin>>dm.meter>>dm.centimeter;
        cout<<"Enter Distance in feet and inches: "<<endl;
        cin>>db.feet>>db.inches;
        sum1=dm.meter+(db.feet)*0.3048;
        sum2=dm.centimeter+(db.inches)*2.54;
        cout<<"\nMeter + Feet = "<<sum1<<" meter";
        cout<<"\nCentimeter + inches = "<<sum2<<" cemtimeter";
    }
int main()
{
    DM dm;
    DB db;
    add(dm,db);
    return 0;
}