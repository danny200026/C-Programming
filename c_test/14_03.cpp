#include <iostream>
using namespace std;

class Rec
{
      private:
          int length,width;
      public:
          Rec()
          {}
              
          Rec(int le)
          {
              width=length=le; 
          }
          
          Rec(int le,int w)
          {
              length=le;
              width=w;    
          }
          
          int area()
          {
              return length*width;
          }
          
          ~Rec(){}  //"�Ѻc�l" ->�\��:����O����(�̭�����Ʒ|����!!) 
          
};              
int main()
{
    Rec a;
    Rec b(3);
    Rec c(6,4);
    
    cout<<"a�����n��:"<<a.area()<<endl;  //�]���S����J��,�ҥH�|���ü� 
    cout<<"b�����n��:"<<b.area()<<endl;
    cout<<"c�����n��:"<<c.area()<<endl; 

    system("pause");
    return 0;
}
