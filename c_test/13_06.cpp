#include <iostream>
using namespace std;

class person
{
    private:    
         int weight;         
    public:
         int height;  
         void walk(int v)
         {
              cout<<"�C�p�ɨ�"<<v<<"����\n";
         }
         
         void setw(int w)
         {
              weight=w;
         }        
         
         void dis()
         {
              cout<<"�魫="<<weight<<"����\n";
              cout<<"����="<<height<<"����\n"; 
         } 
};
int main()
{
    person p1;
    p1.walk(5);
    p1.height=175;  
    p1.setw(84);  //p1.weight=89   //private�����ܼƤ���b���O�~�����s��!!! 
    p1.dis();       
     
    
    
    person p2;
    p2.walk(9);
    p2.height=164;
    p2.setw(57);
    p2.dis();
    
    system("pause");
    return 0;
}
