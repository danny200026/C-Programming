/*"class" ==>"類別"  -->分成:1."private(封裝)"   
                             2."protected(保護)"
                             3."public(公開的)"
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
                cout<<"請輸入序號以便使用系統!!\n";
                system("pause");
           }  
};
int main()
{
    system1 notice;     
    
    notice.screen();

    return 0;
}
