//��r��.substr(���ޭ�,�X��)  -->�^����r�ꤤ���r 
//�r���ܼ�.assign("�s�r��",���ޭ�,�X��)  -->�^���s�r��ܦr���ܼƤ� 

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
    cout<<"s4="<<s4.assign("����r",0,1)<<endl;   //�]���@�Ӥ���r�Ψ�Ӧ줸,�Y�S���]�w�n,��ܮɷ|�X�{�ýX 
    
    system("pause");
    return 0;
}
