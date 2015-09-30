//"getline(cin,變數)" -->字串的輸出用法 
//"cin.getline(變數,字元數,'結束字元')"  -->適用於輸出"字元"陣列
#include <iostream>
using namespace std;

int main()
{
    string s1;
    
    cout<<"請輸入字串(可含空白)"<<endl; 
    
    //cin.getline(s1,50);    //這種輸入方式不能用於字串的輸入!!
  
    getline(cin,s1);    //所以在輸入字串時需要用"getline(cin,變數)"
    cout<<"你剛剛輸入的字串為:"<<s1<<endl; 


    system("pause");
    return 0;
}
