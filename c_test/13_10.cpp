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
     cout<<"國文:"<<ch<<"\n";
     cout<<"英文:"<<en<<"\n";
     cout<<"數學:"<<math<<"\n"; 
     cout<<"平均:"<<(float)(ch+en+math)/3<<"\n";             
}
int main()
{
    int c,e,m;
    int i;
    grade my[3];
    
    for(i=0;i<3;i++)
    {
        cout<<"請輸入第"<<i+1<<"位同學的成績:\n";
        cout<<"國文:";
        cin>>c;
        cout<<"英文:";               
        cin>>e;
        cout<<"數學:";
        cin>>m;
        
        my[i].set(c,e,m); 
    }

    cout<<"*********輸出*********\n";

    for(i=0;i<3;i++)
    {
        cout<<"\n第"<<i+1<<"位同學的成績:\n";
        my[i].disp();
    }
    
    cout<<"\n";
    system("pause");
    return 0;
}
