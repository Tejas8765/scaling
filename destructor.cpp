
#include<iotsream>
using namespace std;
class test
{
    static int count;
public:
    test()
    {
        count++;
        cout<<"object is created";
    }
    ~test()
    {
        cout<<"object destroyed";
        count--;
    }
};
int main()
{
    cout<<"main block";
    test t1;
    {
     cout<<"block 1";
     test t2,test t3;
     cout<<"block 1 exit";
    }
    cout<<"exit from main";

}
