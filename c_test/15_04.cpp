/*overloading  "�h��" -->�ѼƤ��P(�غc�l) 
    ����:�l���O�N�~�ӨӪ���ƥ[�H�X�R
*/ 
#include <iostream>
using namespace std;

class employee
{
     public: 
         int salary;
         void show(int x)
         {
              cout<<"���u�h���~����(���~):"<<x<<endl;
         }
};

class manager:public employee
{
     public:
          int bonus;
          void show(int x,int y)   //overloading�Ϊk 
          {
               cout<<"�g�z�h���~����(���~+���Q):"<<x+y<<endl;
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
