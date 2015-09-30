#include <iostream>
using namespace std;

int main()
{
    /*
      cout.setf(ios::left,ios::adjustfield); -->設定靠左對齊 
      cout.unsetf(ios::left,ios::adjustfield); -->取消靠左對齊 
    */
    
    cout.fill('*');
    cout.setf(ios::left,ios::adjustfield);
    cout.width(15);    
    cout<<"test"<<endl;

    
    cout.setf(ios::adjustfield);
    cout.width(20);
    cout.fill('*');
    cout<<"test"<<endl;

    system("pause");
    return 0;
}
