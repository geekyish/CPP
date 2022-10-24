#include<iostream>
using namespace std;
int main()
{
    int a = 4;
    int *pa = &a;
    float b = 56.77;
    float *pb = &b;
    char c = 'r';
    char *pc = &c;
    double d = 456.777;
    double *pd = &d;
    long e = 23.444444;
    long *pe = &e;
    cout << "\n[sizeof(a)   ]: = " << sizeof (a);
    cout << "\n[sizeof(*pa) ]: = " << sizeof (*pa);

    cout << "\n[sizeof(b)   ]: = " << sizeof (b);
    cout << "\n[sizeof(*pb) ]: = " << sizeof (*pb);

    cout << "\n[sizeof(c)   ]: = " << sizeof (c);
    cout << "\n[sizeof(*pc) ]: = " << sizeof (*pc);

    cout << "\n[sizeof(d)   ]: = " << sizeof (d);
    cout << "\n[sizeof(*pd) ]: = " << sizeof (*pd);

    cout << "\n[sizeof(e)   ]: = " << sizeof (e);
    cout << "\n[sizeof(*pe) ]: = " << sizeof (*pe);

    return 0;
}