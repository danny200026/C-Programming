#include <iostream>
using namespace std;

int main()
{
    string s1;
    char s2[]="abcdefghijklmnopqrstuvwxyz";
    
    puts("請輸入字串"); 
    getline(cin,s1); 

    cout<<"複製前,s2="<<s2<<endl; 
    strcpy(s2,s1.c_str());    
    cout<<"複製後,s2="<<s2<<endl;

    system("pause");
    return 0;
}
