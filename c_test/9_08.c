#include<math.h>

int main()
{
    int a,b,c,d,n,sq;
    
    printf("�п�J�@�Ӿ�Ʃέt���\n"); 
    scanf("%d",&a);
    
    
    printf("%d������Ȭ�%d\n",a,abs(a));  //"abs()"�O�ƾǨ��,�M��������� 
    
    
    printf("�п�J�@�ө���\n");
    scanf("%d",&b);
    printf("�п�J��ӫ���\n");
    scanf("%d %d",&c,&d);
    
    for(n=c;n<=d;n++)
    {
        printf("The power(%d,%d)=%.f\n",b,n,pow(b,n));  //"pow()"�O�ƾǨ��,�M���p�⦸�� 
        sq=pow(b,n);
    }
    printf("sqrt(%d)=%.0f\n",sq,sqrt(sq));  //"sqrt()"�O�ƾǨ��,�M���p��}�ڸ��᪺�� 
    
    printf("ceil(%d)=%f\n",sq,ceil(sq));   
    printf("floor(%d)=%f\n",sq,floor(sq));
    
    
    system("pause");
    return 0;
}
