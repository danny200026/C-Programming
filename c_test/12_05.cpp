/*
  
  "erase()  -->�M��   
   �Ϊk:  "�r���ܼ�.erase(���ޭ�,�X��);" 

  "insert()  -->���J 
   �Ϊk:  "��r���ܼ�.insert(���ޭ�,"�����J���r����ܼ�");" 

  "swap()  -->���
   �Ϊk:  "�r���ܼ�.swap(����ժ��r���ܼ�);"
   
  "find()  -->�M��
   �Ϊk:  "�r���ܼ�.find("���M�䪺�r��");"  -->�|�^�ǯ��ޭ�! 
          (�Y�b�r�ꤤ���ƭӬۦP���r��,�|��̫ܳe���r�ꪺ���ޭ�!) 
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
