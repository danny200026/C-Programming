//"union"(�X��`�p�X`�@��) =>�S�I: "�@�ΰO����϶�" 
//"struct"(���c) =>�S�I: "�U�ۿW�ߨϥΰO����϶�" 
//�`�N!! "union"�M"struct"���O���P��ƫ��O�����X" 

#include <iostream>
using namespace std;

union data1
{
      int i;
      char c;
      float f;
      double d;
}u1;

struct data2
{
      int i;
      char c;
      float f;
      double d;
}d2;

int main()
{
      cout<<"sizeof(u1)="<<sizeof(u1)<<endl;    //���̤j���ŧi�ܼ�(double) 
      cout<<"sizeof(d2)="<<sizeof(d2)<<endl;    //�[�`�Ҧ��ŧi(�]�A����) 

    system("pause");
    return 0;
}
