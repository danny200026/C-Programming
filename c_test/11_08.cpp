#include <iostream>
using namespace std;

int main()
{
    /*
      cout.setf(ios::left,ios::adjustfield); -->�]�w�a����� 
      cout.unsetf(ios::left,ios::adjustfield); -->�����a����� 
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
