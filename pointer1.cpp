#include <iostream>
using namespace std;
int main()
{
    int arr[5]={10,20,30,40,50};
    int *p,i,sum=0;
    p=&arr[0];   // or p=arr this is also correct.
    cout<<"elements are ";
    for(i=0;i<5;i++)
    {
        cout<<"\n \t"<<*p;
        sum=sum+*p;
        p++;
    }
cout<<"\n \t"<<sum;
    return 0;
}

