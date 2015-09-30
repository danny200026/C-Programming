#include <iostream>
using namespace std;

class father
{
      private:
          int x;
      protected:
          int y;
      public:
          int z;
};

class son:public father
{      
      public:
        void setvaule()
         {
              y=4;
              z=6;
         }
        void showvaule()
         {
              cout<<"y="<<y<<endl;
              cout<<"z="<<z<<endl;               
         }
};                 
int main()
{
    son s;
    
    //s.y=40;
    s.setvaule();
    s.showvaule();
    
    s.z=60;
    s.showvaule();

    system("pause");
    return 0;
}
