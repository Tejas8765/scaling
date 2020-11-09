
#include<iostream>
using namespace std;
class test
{
    static int count;
public:
    test()
    {
        count++;
        cout<<"\n \tobject is created";
    }
    ~test()
    {
        cout<<"\n \tobject destroyed";
        count--;
    }
};
int test::count;
int main()
{
    cout<<"\n \tmain block";
    test t1;
    {
     cout<<"\n \tblock 1";
     test t2, t3;
     cout<<"\n \tblock 1 exit";
    }
    cout<<"\n \texit from main";

}
