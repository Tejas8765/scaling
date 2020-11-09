#include <iostream>
using namespace std;
class stu
{
protected:
    int roll;
public:
    void getroll(int);
    void putroll();

};
void stu::getroll(int x)
{
    roll=x;
}
void stu::putroll()
{
    cout<<"\n \troll no. of student is "<<roll;

}
class test:public stu
{
protected:
    float b,c;
public:
    void getmarks(float,float);
    void putmarks();

};
void test::getmarks(float x,float y)
{
    b=x;
    c=y;

}
void test::putmarks()
{
    cout<<"\n \tmarks in subject 1 is "<<b;
    cout<<"\n \tmarks in subject 2 is "<<c;

}
class result:public test
{
protected:
    float total;
public:
    void disp();
};
void result::disp()
{
    total=b+c;
    cout<<"\n \ttotal marks is "<<total;
}
int main()
{
    result obj;
    obj.getroll(101);
    obj.putroll();
    obj.getmarks(69.69,96.96);
    obj.putmarks();
    obj.disp();
    return 0;
}

