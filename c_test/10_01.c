#include<stdlib.h>
#include<time.h>

int main()
{
    int r1,r2,i;
    
    srand(time(NULL));    //�H�ɶ�����Ȫ��üƺؤl�� 
    
    for(i=1;i<=10;i++)
    {
        r1=rand();    //r1=�ü� 
        printf("%d\n",r1);
        r2=r1%10;
        printf("%d\n",r2);
    }    
    
    system("pause");
    return 0;
}
