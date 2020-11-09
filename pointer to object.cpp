
#include<iostream>
#include <string>
using namespace std;
class stu
{
    int roll;
    char name[10];
public:
    void getdata(int x,char *p)
    {
        roll=x;
        strcpy(name,y);
    }
    void putdata()
    {
        cout<<"student name "<<name;
        cout<<"student roll no."<<roll;
    }
};
int main()
{
    stu obj;
    stu *p;
    p=&obj;
    p->getdata(101,"ravi");
    p->putdata();
    return 0;
}
