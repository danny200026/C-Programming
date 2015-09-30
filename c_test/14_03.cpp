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
          
          ~Rec(){}  //"解構子" ->功用:釋放記憶體(裡面的資料會消失!!) 
          
};              
int main()
{
    Rec a;
    Rec b(3);
    Rec c(6,4);
    
    cout<<"a的面積為:"<<a.area()<<endl;  //因為沒有輸入值,所以會取亂數 
    cout<<"b的面積為:"<<b.area()<<endl;
    cout<<"c的面積為:"<<c.area()<<endl; 

    system("pause");
    return 0;
}
