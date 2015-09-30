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

class son:public father
{
      protected:
          int ans2()
          {
              x=10,y=20;
              return x+y;
          }
      public:    
          int ans3()
          {
              cout<<"結果1為:"<<ans1()<<endl;
              cout<<"結果2為:"<<ans2()<<endl;  //protected只能在子類別內使用 
              return 2*(x+y);
          }
};
int main()
{
    son a;
    cout<<"結果為:"<<a.ans1()<<endl;
    cout<<"結果3為:"<<a.ans3()<<endl; 

    system("pause");
    return 0;
}
