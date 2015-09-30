/*overloading  "多載" -->參數不同(建構子) 
    說明:子類別將繼承來的函數加以擴充
*/ 
#include <iostream>
using namespace std;

class employee
{
     public: 
         int salary;
         void show(int x)
         {
              cout<<"員工層的薪水為(本薪):"<<x<<endl;
         }
};

class manager:public employee
{
     public:
          int bonus;
          void show(int x,int y)   //overloading用法 
          {
               cout<<"經理層的薪水為(本薪+紅利):"<<x+y<<endl;
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
