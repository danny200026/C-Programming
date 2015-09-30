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
              cout<<"每小時走"<<v<<"公里\n";
         }
         
         void setw(int w)
         {
              weight=w;
         }        
         
         void dis()
         {
              cout<<"體重="<<weight<<"公斤\n";
              cout<<"身高="<<height<<"公分\n"; 
         } 
};
int main()
{
    person p1;
    p1.walk(5);
    p1.height=175;  
    p1.setw(84);  //p1.weight=89   //private內的變數不能在類別外直接存取!!! 
    p1.dis();       
     
    
    
    person p2;
    p2.walk(9);
    p2.height=164;
    p2.setw(57);
    p2.dis();
    
    system("pause");
    return 0;
}
