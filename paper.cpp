#include <iostream>
using namespace std;
class base
{
protected:
    int a;
public:
    base()
    {
        a=9;
    }
    void display()
    {
        cout<<a;
    }

};
class derived:public base
{

public:
    derived()
    {
        a=12;
    }

};
int main()
{
    base obj;
    obj.display();
}
