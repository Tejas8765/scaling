#include <iostream>
using namespace std;
void swap(int*,int*);
int main()
{
    int a,b;
    cout<<"\n \tenter values of A and B ";
    cin>>a>>b;
    swap(a,b);
    cout<<"\n \tvalues of a is "<<a<<"\n \tand b is "<<b;
    return 0;

}
void swap(int x,int y)
{
    x=y;
    y=x;
}
