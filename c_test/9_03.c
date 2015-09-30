#include"9_02.c"  //載入自己設計的檔案 

int main()
{
    int n;
    
    printf("請輸入半徑:");
    scanf("%d",&n);
    
    printf("圓的面積為:%.2f\n",area(n));
    printf("圓的周長為:%.2f\n",length(n)); 
    system("pause");
    return 0;
}
