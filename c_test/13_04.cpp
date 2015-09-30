#include <iostream>
using namespace std;

struct pc
{
       string pcname;
       int qty,price;
}a1;

int main()
{
    a1.pcname="K40IP";
    a1.qty=5;
    a1.price=23000;
    
    cout<<"5台"<<a1.pcname<<",一台"<<a1.price<<"元,"
    <<"5台共"<<a1.price*a1.qty<<"元"<<endl; 

    system("pause");
    return 0;
}
