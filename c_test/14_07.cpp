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
              cout<<"���G1��:"<<ans1()<<endl;
              cout<<"���G2��:"<<ans2()<<endl;  //protected�u��b�l���O���ϥ� 
              return 2*(x+y);
          }
};
int main()
{
    son a;
    cout<<"���G��:"<<a.ans1()<<endl;
    cout<<"���G3��:"<<a.ans3()<<endl; 

    system("pause");
    return 0;
}
