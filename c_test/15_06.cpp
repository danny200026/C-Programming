/*overriding  "�и�" -->�ѼƬۦP 
    ����:�l���O�N�~�ӨӪ���ƥ[�H�ק�
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
          void show(int x)   //overriding�Ϊk 
          {
               cout<<"�g�z�h���~����(���~+���Q):"<<x+bonus<<endl;
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
