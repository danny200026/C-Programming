#include <iostream>
using namespace std;

class shape
{
      public:
          virtual int area()=0;
          void show_area()
          {
              cout<<"area="<<area()<<endl;
          }
};

class win:public shape
{
      protected:
          int width,height;     
      
      public:
          win(int w,int h)
          {
              width=w;
              height=h;
          }
          int area()
          {
              return width*height;
          }   
};         

class cirwin:public shape
{
      protected:
          int radius;
                
      public:
          cirwin(int r)
          {
              radius=r;
          }
          int area()    //不可寫成virtual float area(),型別必須要相同!! 
          {
              return 3.14*radius*radius;  //因為型別是"int",所以回傳值會有問題! 
          }
};

int main()
{
    win w1(9,30);
    cirwin c1(5);
    
    w1.show_area();
    c1.show_area();
    
    system("pause");
    return 0;
}
