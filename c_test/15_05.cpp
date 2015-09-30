#include <iostream>
using namespace std;

class employee
{
     public: 
         int salary;
         void show(int x)
         {
              cout<<"薪水(本薪):"<<x<<endl;
         }
};

class manager:public employee
{
     public:
          int bonus;
          void show(int x,int y)   
          {
               employee::show(x);  //直接使用父類別的show(),變數則使用繼承來的變數x 
               cout<<"薪水(紅利):"<<y<<endl;
          }     
};

int main()
{
    employee e;
    cout<<"員工層:"<<endl; 
    e.show(25000);
    
    manager m;
    cout<<"經理層:"<<endl; 
    m.show(40000,10000);

    system("pause");
    return 0;
}
