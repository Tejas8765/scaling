#include <iostream>
using namespace std;
class ItemType
{
 private:
 string name;
 public:
 string getName()
 {
 return name;
 }
 void setName(string itemname)
 {
 name=itemname;
 }
};
int main()
{
 ItemType item;
 string name ;
 item.setName("furniture_items");
 item.setName("electronic_items");
 cout<<setName();
 return 0;
}
