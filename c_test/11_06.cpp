#include <iostream>
using namespace std;

int main()
{
    /*  cout.width(n);
        cout.fill('字元');
      以上這兩個函數可搭配著使用!!  */   
    
    int a=100,b;
    
    cout.width(10);
    cout.fill('*');
    cout<<"a="<<a<<endl;
    

    
    cout<<"請輸入一個整數"<<endl;
    cin>>b;
    cout.width(10);
    cout.fill('%');
    cout<<"b="<<b<<endl;
      
    system("pause");
    return 0;
}
