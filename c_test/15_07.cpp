/*"pure virtual function" 
  特點: 
    1.抽像類別 --> 不能建立物件 -->可建立指標物件(間接使用) 
    2.只有函數名稱 -->沒有實作 -->可在子類別當中去寫動作 
  
  宣告用法: "virtual 函數名稱()=0"  
*/ 
#include <iostream>
using namespace std;

class shape
{
      public:
          virtual void draw()=0;
                   
};

class tri:public shape
{
      public:
          void draw()      //在這裡可省略virtual 
          {cout<<"三角形"<<endl;}
};         

class rec:public shape
{
      public:
          void draw()      
          {cout<<"矩形"<<endl;}
};

class cir:public shape
{
      public:
          void draw()
          {cout<<"圓形"<<endl;}        
};   
int main()
{
    tri t;
    rec r;
    cir c;

    t.draw();     //直接使用 
    r.draw();
    c.draw();
    
    cout<<"******************"<<endl;
    
    shape *ptr;   //利用指標(間接使用) 
    ptr=&t;
    ptr->draw();
    
    ptr=&r;
    ptr->draw();
    
    ptr=&c;
    ptr->draw();

    system("pause");
    return 0;
}
