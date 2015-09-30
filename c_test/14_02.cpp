/*    ****預設建構子必須要出現的條件:****
    --> "須建立物件" & "有其他的建構子存在"
*/             

#include <iostream>
using namespace std;

class Rec
{
      private:
          int length,width;
      public:
          Rec()
          {}   //第一個建構子 
          Rec(int le)
          {
              width=length=le;   //C++可以這樣打,但C語言就必須要分開輸入!! 
          }
          Rec(int le,int w)
          {
              length=le;
              width=w;    
          }
};              
int main()
{
    Rec a;
    Rec b(10);
    Rec c(20,100);
    
    system("pause");
    return 0;
}
