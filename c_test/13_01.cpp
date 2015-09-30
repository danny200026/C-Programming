//"相同資料型別的集合" =>陣列
//"不同資料型別的集合" =>"struct"(結構) 
    

#include <iostream>
using namespace std;

struct aaa
{
       int n1;
       float n2;       
       
}a1,a2;   //宣告物件的方法1(a1,a2)

int main()
{
    struct aaa a3;  //宣告物件的方法2(a3,a4) 
    struct aaa a4;

    a1.n1=40;   //用法: "物件.變數" 
    a1.n2=4.348;

    a2.n1=82;
    a2.n2=10.41;

    a3.n1=10;
    a3.n2=8.48;
    
    a4.n1=103;
    a4.n2=5.71;
    
    cout<<"a1.n1="<<a1.n1<<endl<<"a1.n2="<<a1.n2<<endl;
    cout<<"a2.n1="<<a2.n1<<endl<<"a2.n2="<<a2.n2<<endl;
    cout<<"a3.n1="<<a3.n1<<endl<<"a3.n2="<<a3.n2<<endl;
    cout<<"a4.n1="<<a4.n1<<endl<<"a4.n2="<<a4.n2<<endl;
    
    system("pause");
    return 0;
}
