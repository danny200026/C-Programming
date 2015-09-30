//在類別內,若一開始就沒有特別設定,會將所有項目都預設為"private"!! 

#include <iostream>
using namespace std;

class father
{
      //private:          
      //protected:         
      //public:
           int speed;   
};      

class son:public father
{
      public:
      int disspeed()
      {
          cout<<"現在速度為:"<<speed<<endl;    
      }
};

int main()
{
    son s;
    s.speed=20;
    s.disspeed();

    system("pause");
    return 0;
}
