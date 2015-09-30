#include <iostream>
using namespace std;

int main()
{
    char name[50];
    
    cout<<"請輸入你的姓名"<<endl;
    cin>>name;                     //在這裡,若輸入時在中間空一格,輸出時只會出現前半段!
                                   //因此應該改用"cin>>getline(變數,字元數,'結束字元')"來表示(11_13有說明) 
    cout<<"你的名字是"<<name<<endl; 

    system("pause");
    return 0;
}
