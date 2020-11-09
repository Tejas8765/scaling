#include <iostream>
using namespace std;
class sum
{
    int a,b,t;
public:
    void getdata(void);
    void putdata(void);
};
void sum::getdata(void)
{
    cout<<"\n \tenter two nos.";
    cin>>a>>b;

}
void sum::putdata(void)
{
    t=a+b;
    cout<<"\n \taddition of two nos."<<a<<" and "<<b<<" is = "<<t;
}
int main()
{
    sum obj;
    obj.putdata();
    obj.getdata();

    return 0;
}
