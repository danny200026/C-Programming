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

class son:public father,public mother    //�P���~��father�Mmother 
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
    //s.showdata()   //�h���~�Ӫ��`�����~,�sĶ�������D�n��father��showvalue()              
                                                  //�٬O��mother��showvalue() 
    father a;
    a.show1();  //�]��father�̪�x�S���]��l��,�ҥH�|���ü�. 
    system("pause");
    return 0;    
}
