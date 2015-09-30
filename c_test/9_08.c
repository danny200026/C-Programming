#include<math.h>

int main()
{
    int a,b,c,d,n,sq;
    
    printf("請輸入一個整數或負整數\n"); 
    scanf("%d",&a);
    
    
    printf("%d的絕對值為%d\n",a,abs(a));  //"abs()"是數學函數,專門取絕對值 
    
    
    printf("請輸入一個底數\n");
    scanf("%d",&b);
    printf("請輸入兩個指數\n");
    scanf("%d %d",&c,&d);
    
    for(n=c;n<=d;n++)
    {
        printf("The power(%d,%d)=%.f\n",b,n,pow(b,n));  //"pow()"是數學函數,專門計算次方 
        sq=pow(b,n);
    }
    printf("sqrt(%d)=%.0f\n",sq,sqrt(sq));  //"sqrt()"是數學函數,專門計算開根號後的值 
    
    printf("ceil(%d)=%f\n",sq,ceil(sq));   
    printf("floor(%d)=%f\n",sq,floor(sq));
    
    
    system("pause");
    return 0;
}
