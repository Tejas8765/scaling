#include<iostream>
using namespace std;
class test
{
    int a,b;
public:
    test()
    {
        a=0;
        b=0;
        cout<<"\n \tconstructor called ";
    }
    test(int x,int y)
    {
        a=x;
        b=y;
        cout<<"\n \tparameterized constructor called";
    }
    test operator+(test t);
    void disp();
};
test test::operator+(test t)
{cout<<"\n \twhich one ";
    test temp;

    temp.a=a+t.a;
    temp.b=b+t.b;

    return temp;
}
void test::disp()
{
    cout<<"\n \tvalue of A "<<a;
    cout<<"\n \tvalue of B "<<b;

}
int main()
{
    test t1,t2,t3;
    t1=test(10,20);
    t2=test(30,40);
    t3=t1+t2;
    t1.disp();
    t2.disp();
    t3.disp();
    return 0;
}
