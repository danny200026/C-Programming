/*"class" ==>"���O"  -->����:1."private(�ʸ�)"   
                             2."protected(�O�@)"
                             3."public(���}��)"
*/
#include <iostream>
using namespace std;

class system1
{
      private:
           int key;
      public:
           void screen()
           {
                cout<<"�п�J�Ǹ��H�K�ϥΨt��!!\n";
                system("pause");
           }  
};
int main()
{
    system1 notice;     
    
    notice.screen();

    return 0;
}
