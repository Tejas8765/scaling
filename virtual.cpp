#include <iostream>
using namespace std;
class A
{
    int a;
public:
    void dispa()
    {
        a=10;
        cout<<"\n \tclass A "<<a;
    }
};
class B:public  A
{
    int b;
public:
    void dispb()
    {
        b=20;
        cout<<"\n \tclass B "<<b;
    }
};
class C:public  A
{
    int c;
public:
    void dispc()
    {
        c=30;
        cout<<"\n \tclass C "<<c;
    }
};
class D:public B,public C
{
    int d;
public:
    void dispd()
    {
        d=40;
        cout<<"\n \tclass D "<<d;
    }
};
int main()
{
    D obj;
    obj.B::dispa();
    obj.dispb();
    obj.dispc();
    obj.dispd();
    return 0;
}
