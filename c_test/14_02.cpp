/*    ****�w�]�غc�l�����n�X�{������:****
    --> "���إߪ���" & "����L���غc�l�s�b"
*/             

#include <iostream>
using namespace std;

class Rec
{
      private:
          int length,width;
      public:
          Rec()
          {}   //�Ĥ@�ӫغc�l 
          Rec(int le)
          {
              width=length=le;   //C++�i�H�o�˥�,��C�y���N�����n���}��J!! 
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
