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
    
    cout<<"5�x"<<a1.pcname<<",�@�x"<<a1.price<<"��,"
    <<"5�x�@"<<a1.price*a1.qty<<"��"<<endl; 

    system("pause");
    return 0;
}
