#include <iostream>
using namespace std;

class father
{
      public:
          int x,y;
          int ans()
          {
              x=1,y=2;
              return x+y;
          }
};

class son1:protected father
{
    public:
        int ans1()
        {
            int a=6,b=18;
            return a+b;
        }   
};

class son2:public father
{
      
};

int main()
{
    son1 a;
    son2 b;
    
    cout<<"結果a.ans1為:"<<a.ans1()<<endl; 
    cout<<"結果b.ans()為:"<<b.ans()<<endl;
    
    system("pause");
    return 0;
}
