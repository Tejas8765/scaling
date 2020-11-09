#include <iostream>
using namespace std;
class A
{
    int a;
public:
    void getvala(int);
    int geta();
};
class B : public A
{
    int b,c;
public:
    void getvalb(int);
    void add();
    void dispval();

} ;
void A::getvala(int x)
{
    a=x;
}
int A::geta()
{
    return a;
}
void B::getvalb(int x)
{
     b=x;
}
void B::add()
{
    c=geta()+b;
}
void B::dispval()
{
    cout<<"\n \tvalue of A "<<geta();
    cout<<"\n \tvalue of B "<<b;
    cout<<"\n \taddition of A and B is "<<c;

}
int main()
{
    int a,b;
    cout<<"\n \tenter value of A";
    cin>>a;
    cout<<"\n \tMenter value of B";
    cin>>b;
    B obj;
    obj.getvala(a);
    obj.getvalb(b);
    obj.add();
    obj.dispval();
    return 0;
}
