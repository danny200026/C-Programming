/*           �غc�l(��)"constructor"
      �@�ػP���O�P�W,�S���^�ǭȪ��S�O��� 
         (��:  �^�ǭ� ->�]�w������) 
*/
#include <iostream>
using namespace std;

class Rec 
{
      private:
          int width;
      public:
          /*Rec()
          {}*/  //-> �w�]�غc�l,�S���^�ǭ� 
                 
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
