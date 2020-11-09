#include<iostream>
#include<cstring>
using namespace std;
class employee
{
	string name;
	int basic;
	int hra;
	public:
	employee(string m,int x,int y)	// default constructor
{
	name=m;
	basic=x;
	hra=y;
}


void  showdata()
{
	cout<<"Employee Name:"<<name<<endl;
	cout<<"Basic pay"<<basic<<endl;
	cout<<"Hra :"<<hra<<endl;
}
};
int  main()
{
	employee emp("mmm",300,400);
	emp.showdata();

	return 0;
}
