/*  (較特殊用法) 
  class函數可以寫在類別外:(須符合下列條件)
        1.類別內,要先宣告函數原型
        
        2.void 類別名::setbook(參數)
        {
             ......   
        }
*/

#include <iostream>
using namespace std;

class book
{
      private:
          string bookid,bookname;
          int bookprice,bookqty,total;
          
      public:
          void setbook(string id,string na,int pr,int qt);
          void outbook();
}excel;

void book::setbook(string id,string na,int pr,int qt)
          {
               bookid=id;
               bookname=na;
               bookprice=pr;
               bookqty=qt;
               total=bookprice*bookqty;
          }
void book::outbook()
{
     cout<<bookqty<<"本"<<bookname<<",原價共"<<total
     <<"元,打九折後,共"<<total*0.9<<"元\n";
}  
                                
int main()
{
    excel.setbook("B0002","Excel2007初階",320,10);
    excel.outbook();
    
    system("pause");
    return 0;
}
