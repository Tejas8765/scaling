#include<iostream>
using namespace std;
class test
{
    int no;
    static int count;
public:
    void getval(int);
    void dispcount(void);
};
void test::getval(int x)
{
    no=x;
    cout<<"number = "<<count;
    count++;

}
void test::dispcount(int)
{
    return(count);
}
int main()
{
 test t1,t2,t3;
 t1.dispcount();
 t2.dispcount();
 t3.dispcount();
 t1.getval();
 t2.getval();
 t3.getval();
 t1.dispcount();
 t2.dispcount();
 t3.dispcount();
 return 0;
}
