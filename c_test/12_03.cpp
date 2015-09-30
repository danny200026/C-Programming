//"原字串.append("新字串",索引值,取幾位) -->將新字串附加在原字串後面 

#include <iostream>
using namespace std;

int main()
{
    string s1="This is a test";
    s1.append("that I am practicing !",13,22);
    cout<<"s1="<<s1<<endl;
    

    string s2="Test director B";
    s2.append(" Take easy!!",0,12); 
    cout<<"s2="<<s2<<endl;
    
    
    string s3="這個是測試";
    s3.append(",不需要緊張!!",0,12); 
    cout<<"s3="<<s3<<endl;
    
    
    system("pause");
    return 0;
}
