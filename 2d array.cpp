#include <iostream>
using namespace std;
int main()
{
    int a[2][2],i,j,add=0;
    cout<<"enter 4 elements";
      for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"your entered elements are";
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
           cout<<a[i][j];
           add=add+a[i][j];

        }
        cout<<" "<<add;
        cout<<"\n";
        add=0;
    }

    return 0;
}

