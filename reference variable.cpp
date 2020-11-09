#include <iostream>
using namespace std;
int main()
{
    int a=100,&ref=a;
    cout<<"\n \t"<<a;
    cout<<"\n \t"<<ref;
    cout<<"\n \t"<<&ref;
    cout<<"\n \t"<<&a;
    return 0;

}
