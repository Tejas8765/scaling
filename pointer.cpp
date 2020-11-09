#include<iostream>
using namespace std;
int main()
{
    int a=69;
    int *ptr;
    *ptr=a;
    cout<<"\n \t"<<a;
    cout<<"\n \t"<<*ptr;
    cout<<"\n \t"<<&ptr;
    cout<<"\n \t"<<&a;
    cout<<"\n \t"<<&*ptr;

    return 0;
}
