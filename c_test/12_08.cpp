#include <iostream>
using namespace std;

int main()
{
    string s1;
    char s2[]="abcdefghijklmnopqrstuvwxyz";
    
    puts("�п�J�r��"); 
    getline(cin,s1); 

    cout<<"�ƻs�e,s2="<<s2<<endl; 
    strcpy(s2,s1.c_str());    
    cout<<"�ƻs��,s2="<<s2<<endl;

    system("pause");
    return 0;
}
