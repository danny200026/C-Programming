//�l���O�O�@�~�� 

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
    cout<<"���Gb��:"<<b.ans1()<<endl;
    //cout<<"���Ga��:"<<a.ans1()<<endl;  //protected�u��b���O���ϥ� 

    system("pause");
    return 0;
}
