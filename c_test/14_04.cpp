#include <iostream>
using namespace std;

class Tperson
{
      private:
          int tall,weight;
      public:
          Tperson()
          {}
          
          Tperson(int ta,int we)
          {
              tall=ta;
              weight=we;     
          }
          
          void disp()
          {
              cout<<"身高為:"<<tall<<",體重為:"<<weight<<endl;
          }
                           
          ~Tperson(){}
};
int main()
{
    Tperson t1;
    Tperson t2(177,68);

    t1.disp();  //沒有初始值,取亂數 
    t2.disp();
    
    system("pause");
    return 0;
}
