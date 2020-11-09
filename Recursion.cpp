#include <iostream>
using namespace std;
long fact(int);
int main()
{
    int a;
    cout<<"\n \tenter a no.";
    cin>>a;
    cout<<"\n \tfactorial of "<<a<<" is "<<fact(a);
    return 0;

}
long fact(int x)
{
    if(x==0)
    {
        return 1;
    }
    return (x*fact(x-1));

}
