int main()
{
    int a,b,x;
    
    printf("請輸入兩個數字\n");
    
    scanf("%d %d",&a,&b);
    
        x=(a>b)?
        printf("第一個數字是:%d\n第二個數字是:%d\n%d&%d的結果為:%d\n",a,b,a,b,a&b):
        printf("第一個數字是:%d\n第二個數字是:%d\n%d|%d的結果為:%d\n",a,b,a,b,a|b);    
    system("pause");
    return 0;
}
