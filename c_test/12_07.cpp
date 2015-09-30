/*  "字串變數.c_str()"  -->將字串轉成字元陣列 
    以strcpy()的用法: "strcpy(目的字元陣列變數,來源字串.c_str())"                    
*/
#include <iostream>
using namespace std;

int main()
{
    string s1;
    char s2[100];
    
    puts("請輸入字串"); 
    getline(cin,s1); 

    cout<<"複製前,s2="<<s2<<endl; 
    strcpy(s2,s1.c_str());    
    cout<<"複製後,s2="<<s2<<endl;

    system("pause");
    return 0;
}
