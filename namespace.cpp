#include <iostream>
using namespace std;
namespace ns1
{
    int value()
    {
        return 5;
    }
}
namespace ns2
{
    int value()
    {
        return -5;
    }
}
int main()
{
    cout<<ns1::value();
    cout<<ns2::value();
}
