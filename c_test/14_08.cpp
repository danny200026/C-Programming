//子類別保護繼承 

#include <iostream>
using namespace std;

class father
{
      public:
          int x,y;
          int ans1()
          {
              x=1,y=2;
              return x+y;
          }
};

class son1:protected father
{
 
};

class son2:public father
{
      
};

int main()
{
    son1 a;
    son2 b;
    cout<<"結果b為:"<<b.ans1()<<endl;
    //cout<<"結果a為:"<<a.ans1()<<endl;  //protected只能在類別內使用 

    system("pause");
    return 0;
}
