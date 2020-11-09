#include <iostream>
using namespace std;
class hi
{
    int no;
public:
    hi(int no=0)
    {
        this->no=no;
    }
    hi& great(hi &h)
    {
        if(h.no>no)
        {
            return h;
        }
        else
        {
            return *this;
        }
    }
    void disp(void)
    {
        cout<<"greater value"<<no;
    }
};

int main()
{
    hi h1(10),h2(20),h3;
    h3=h1.great(h2);
    h3.disp();
return 0;
    }
