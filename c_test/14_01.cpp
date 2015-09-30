/*           建構子(元)"constructor"
      一種與類別同名,沒有回傳值的特別函數 
         (註:  回傳值 ->設定物件初值) 
*/
#include <iostream>
using namespace std;

class Rec 
{
      private:
          int width;
      public:
          /*Rec()
          {}*/  //-> 預設建構子,沒有回傳值 
                 
          int set()
          {
              width=10;
              return width;
          }
};
   
int main()
{
    Rec a;
    cout<<a.set()<<"\n";

    system("pause");
    return 0;
}
