#include <iostream>
using namespace std;

class employee
{
     public: 
         int salary;
         void show(int x)
         {
              cout<<"�~��(���~):"<<x<<endl;
         }
};

class manager:public employee
{
     public:
          int bonus;
          void show(int x,int y)   
          {
               employee::show(x);  //�����ϥΤ����O��show(),�ܼƫh�ϥ��~�ӨӪ��ܼ�x 
               cout<<"�~��(���Q):"<<y<<endl;
          }     
};

int main()
{
    employee e;
    cout<<"���u�h:"<<endl; 
    e.show(25000);
    
    manager m;
    cout<<"�g�z�h:"<<endl; 
    m.show(40000,10000);

    system("pause");
    return 0;
}
