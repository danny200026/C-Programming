//"getline(cin,�ܼ�)" -->�r�ꪺ��X�Ϊk 
//"cin.getline(�ܼ�,�r����,'�����r��')"  -->�A�Ω��X"�r��"�}�C
#include <iostream>
using namespace std;

int main()
{
    string s1;
    
    cout<<"�п�J�r��(�i�t�ť�)"<<endl; 
    
    //cin.getline(s1,50);    //�o�ؿ�J�覡����Ω�r�ꪺ��J!!
  
    getline(cin,s1);    //�ҥH�b��J�r��ɻݭn��"getline(cin,�ܼ�)"
    cout<<"�A����J���r�ꬰ:"<<s1<<endl; 


    system("pause");
    return 0;
}
