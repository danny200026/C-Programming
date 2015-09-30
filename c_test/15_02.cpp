#include <iostream>
using namespace std;

class father
{
     public:
            int x;
            void show1()
            {
                 cout<<"father:"<<x<<endl;
            }
            void showdata()
            {
                 cout<<"father:"<<x<<endl;
            }      
};

class mother
{
      public:
             int y;
             void show2()
             {
                  cout<<"mother:"<<y<<endl;
             }
             void showdata()
             {
                  cout<<"mother:"<<y<<endl;
             }                   
};

class son:public father,public mother    //同時繼承father和mother 
{
      public:
      void setdata(int a,int b)
      {
          x=a,y=b;     
      }
      void showvalue()
      {
          cout<<"x="<<x<<endl;
          cout<<"y="<<y<<endl;
      }
};

int main()
{
    son s;
    s.setdata(6,9);
    s.showvalue();
    s.show1();
    s.show2();
    //s.showdata()   //多重繼承的常見錯誤,編譯器不知道要用father的showvalue()              
                                                  //還是用mother的showvalue() 
    father a;
    a.show1();  //因為father裡的x沒有設初始值,所以會取亂數. 
    system("pause");
    return 0;    
}
