#include <iostream>
using namespace std;

/*    cin.getline(�ܼ�,�r����,'�����r��');  -->�i��W�ϥ�(�A�Ω�r���}�C)!!    */

int main()
{
    char name[50];
    
    cout<<"�п�J�A���m�W"<<endl;
    cin.getline(name,50);
    cout<<"�A���W�r�O"<<name<<endl; 
    
    cout<<"�п�J�A���m�W"<<endl;
    cin.getline(name,50,'@');   //�����,�ݭn��J"@"�~�|���� 
    cout<<"�A���W�r�O"<<name<<endl; 

    system("pause");
    return 0;
}
