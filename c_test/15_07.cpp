/*"pure virtual function" 
  �S�I: 
    1.�⹳���O --> ����إߪ��� -->�i�إ߫��Ъ���(�����ϥ�) 
    2.�u����ƦW�� -->�S����@ -->�i�b�l���O���h�g�ʧ@ 
  
  �ŧi�Ϊk: "virtual ��ƦW��()=0"  
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
          void draw()      //�b�o�̥i�ٲ�virtual 
          {cout<<"�T����"<<endl;}
};         

class rec:public shape
{
      public:
          void draw()      
          {cout<<"�x��"<<endl;}
};

class cir:public shape
{
      public:
          void draw()
          {cout<<"���"<<endl;}        
};   
int main()
{
    tri t;
    rec r;
    cir c;

    t.draw();     //�����ϥ� 
    r.draw();
    c.draw();
    
    cout<<"******************"<<endl;
    
    shape *ptr;   //�Q�Ϋ���(�����ϥ�) 
    ptr=&t;
    ptr->draw();
    
    ptr=&r;
    ptr->draw();
    
    ptr=&c;
    ptr->draw();

    system("pause");
    return 0;
}
