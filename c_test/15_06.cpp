/*overriding  "滦更" -->把计 
    弧:摸盢膥┯ㄓㄧ计э
*/
#include <iostream>
using namespace std;

class employee
{
     public: 
         int salary;
         void show(int x)
         {
              cout<<"糷羱(セ羱):"<<x<<endl;
         }
};

class manager:public employee
{
     public:
          int bonus;
          void show(int x)   //overridingノ猭 
          {
               cout<<"竒瞶糷羱(セ羱+):"<<x+bonus<<endl;
          }     
};

int main()
{
    employee e;    
    e.show(25000);
    
    manager m;
    m.bonus=30000;
    m.show(40000);

    system("pause");
    return 0;
}
