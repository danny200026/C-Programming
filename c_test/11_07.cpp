#include <iostream>
using namespace std;

int main()
{
    /*  cout.precision(n);
        =>�]�w�Ʀr�����Ħ��(���+�p��)
         ,�bC++���w�]�����Ħ�Ƭ� 
     
           1.�㦳�����     
           2.�]�w��ƪ�n�ݭn"�j�󵥩�(>=)"�ƭ�
           3.�]�w��Ʒ|�|�ˤ��J 
           4.�Y�]�w�����n�p��ƭȦ��,�|�H��ǰO�����(�άٲ��ƭ�)->�����p�өw 
      
      
        cout.setf(ios::fixed,ios::floatfield) -->�����g�k 
        =>�]�w�p���I�᪺���Ħ��(���Mcout.precision(n)�@�_��)
          ²�g��cout.setf(ios::fixed)
                
        cout.unsetf(ios::fixed)
        =>�����]�w�p���I�᪺���Ħ��(���Mcout.precision(n)�@�_��)  */



    cout<<123.79385361<<endl;  //���]�w�e 
    
    cout.precision(5);   //�]�w���Ħ�Ƭ�5,�|�|�ˤ��J 
    cout<<123.7983<<endl;
    cout<<457.3945<<endl;
    
    cout.precision(1);  //�]�����Ħ�Ƥ�ƭȤp,�ҥH�|�H��ǲŸ����(�άٲ��ƭ�) 
    cout<<145.233<<endl;
    
    
    
    cout.precision(4);
    cout.setf(ios::fixed,ios::floatfield);  //�]�w�p���I�᪺���Ħ�Ƭ�4 
    cout<<475.445237<<endl;
    
    cout.unsetf(ios::fixed);  //�����]�w�p���I�᪺���Ħ�� 
    cout<<123.79834<<endl;
    system("pause");
    return 0;
}
