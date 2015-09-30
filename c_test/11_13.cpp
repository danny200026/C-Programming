#include <iostream>
using namespace std;

/*    cin.getline(變數,字元數,'結束字元');  -->可單獨使用(適用於字元陣列)!!    */

int main()
{
    char name[50];
    
    cout<<"請輸入你的姓名"<<endl;
    cin.getline(name,50);
    cout<<"你的名字是"<<name<<endl; 
    
    cout<<"請輸入你的姓名"<<endl;
    cin.getline(name,50,'@');   //執行時,需要輸入"@"才會結束 
    cout<<"你的名字是"<<name<<endl; 

    system("pause");
    return 0;
}
