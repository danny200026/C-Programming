//原字串.substr(索引值,幾位)  -->擷取原字串中的字 
//字串變數.assign("新字串",索引值,幾位)  -->擷取新字串至字串變數內 

#include <iostream>
using namespace std;

int main()
{
    string s1("I am so lucky");
    string s2=s1.substr(2,9);
    cout<<"s2="<<s2<<endl;

    string s3;
    cout<<"s3="<<s3.assign("12347545671586",0,10)<<endl;

    string s4;
    cout<<"s4="<<s4.assign("中文字",0,1)<<endl;   //因為一個中文字用兩個位元,若沒有設定好,顯示時會出現亂碼 
    
    system("pause");
    return 0;
}
