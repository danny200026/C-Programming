#include <iostream>
using namespace std;

int main()
{
    /*"cout.witdth(n)" -->�N��e��(�A���������n�N��j�p) 
    1.  �w�]�a�k,�����ɪť�
    2.  �ȾA�Τ@�Ӽƭ� 
    3.  n����,�|���} */
    
    cout.width(6);   //�u�Ω�@�Ӽƭ�,�ҥH�U�����ƭȤ��|�Q�v�T 
    cout<<123<<endl;
    
    
    cout<<471<<endl;
    
    
    cout.width(3);  //�]��n����,�ҥH�U����ܪ��ɭԷ|���} 
    cout<<123456<<endl;
    
    
    int n;
    
    cout.width(10);
    n=cout.width();
    cout<<"�r���e�׬�:"<<n<<endl;
    
    
    system("pause");
    return 0;
}
