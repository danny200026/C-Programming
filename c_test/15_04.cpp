/*overloading  "更" -->把计ぃ(篶) 
    弧:摸盢膥┯ㄓㄧ计耎
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
          void show(int x,int y)   //overloadingノ猭 
          {
               cout<<"竒瞶糷羱(セ羱+):"<<x+y<<endl;
          }     
};

int main()
{
    employee e;
    e.show(25000);
    
    manager m;
    m.show(40000,10000);

    system("pause");
    return 0;
}
