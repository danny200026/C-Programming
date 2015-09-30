#include<math.h>    //載入標頭檔,在這裡省略也沒有關係(因為DevC++會自己載入進去) 

int main()
{
    int a,b;
    
    printf("請輸入兩個整數");
    scanf("%d %d",&a,&b); 
    
    printf("The power(%d,%d)=%.0f",a,b,pow(a,b));    //"pow()"是計算次方的數學函數,包含在"math.h" 
    system("pause");
    return 0;
}
