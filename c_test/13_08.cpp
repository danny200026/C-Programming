#include <iostream>
using namespace std;

class book
{
      private:
          string bookid,bookname;
          int bookprice,bookqty,total;
          
      public:
          void setbook(string id,string na,int pr,int qt)
          {
               bookid=id;
               bookname=na;
               bookprice=pr;
               bookqty=qt;
               total=bookprice*bookqty;
          }
          void outbook()
          {
               cout<<bookqty<<"本"<<bookname<<",原價共"<<total
               <<"元,打九折後,共"<<total*0.9<<"元\n";
          }            
}excel;
            
int main()
{
    excel.setbook("B0002","Excel2007初階",320,10);
    excel.outbook();
    
    system("pause");
    return 0;
}
