#include <iostream>
using namespace std;

class grade
{
      private:
          int ch,en,math;
          float avg;
      public:
          void set(int c,int e,int m);
          void disp();
}; 
      
void grade::set(int c,int e,int m)
{
     ch=c;
     en=e;
     math=m;
}
void grade::disp()
{
     cout<<"���:"<<ch<<"\n";
     cout<<"�^��:"<<en<<"\n";
     cout<<"�ƾ�:"<<math<<"\n"; 
     cout<<"����:"<<(float)(ch+en+math)/3<<"\n";             
}
int main()
{
    int c,e,m;
    int i;
    grade my[3];
    
    for(i=0;i<3;i++)
    {
        cout<<"�п�J��"<<i+1<<"��P�Ǫ����Z:\n";
        cout<<"���:";
        cin>>c;
        cout<<"�^��:";               
        cin>>e;
        cout<<"�ƾ�:";
        cin>>m;
        
        my[i].set(c,e,m); 
    }

    cout<<"*********��X*********\n";

    for(i=0;i<3;i++)
    {
        cout<<"\n��"<<i+1<<"��P�Ǫ����Z:\n";
        my[i].disp();
    }
    
    cout<<"\n";
    system("pause");
    return 0;
}
