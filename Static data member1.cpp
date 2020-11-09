#include <iostream>
using namespace std;
class A;
class B
{
    int b;
public:
    void getval(int x)
    {
        b=x;
    }
    void putval(void)
    {
        cout<<"\n \tvalue of B "<<b;
    }
    friend void add(A o1,B o2);
};
class A
{
    int a;
public:
    void getval(int y)
    {
    a=y;
    }
    void putval(void)
    {
        cout<<"\n \tvalue of A"<<a;
    }
    friend void add(A o1,B o2);
};
void add(A o1,B o2)
{
    cout<<"\n \taddition of A and B "<<o1.a+o2.b;
}
int main()
{
    A a;
    B b;
    a.getval(100);
    b.getval(200);
    add(a,b);
 return 0;
}
