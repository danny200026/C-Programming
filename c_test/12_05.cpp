/*
  
  "erase()  -->清除   
   用法:  "字串變數.erase(索引值,幾位);" 

  "insert()  -->插入 
   用法:  "原字串變數.insert(索引值,"欲插入的字串或變數");" 

  "swap()  -->對調
   用法:  "字串變數.swap(欲對調的字串變數);"
   
  "find()  -->尋找
   用法:  "字串變數.find("欲尋找的字串");"  -->會回傳索引值! 
          (若在字串中找到數個相同的字串,會顯示最前面字串的索引值!) 
*/   
#include <iostream>
using namespace std;

int main()
{
    string s1="test string1";
    cout<<s1.erase(2,4)<<endl;

    string s2="I like to study technology!";
    cout<<s2.insert(15," hacker")<<endl;

    string s3="123",s4="456";
    s3.swap(s4);
    cout<<"s3="<<s3<<endl<<"s4="<<s4<<endl;
    
    string s5="abcdefghijklmnopqrstuvwxyz";
    cout<<s5.find("i")<<endl;
    cout<<s5.find("stuvwx")<<endl;
    
    
    system("pause");
    return 0;
}
