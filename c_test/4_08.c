int main()
{
    int a,b,x;
    
    printf("請輸入任意一數\n");
    
    scanf("%d %d",&a,&b); 
   
    x=(a>b)?
    printf("你輸入的數字%d比較大\n",a):
    printf("你輸入的數字%d可能大於等於%d大\n",b,a); 
    //"(x==1)?成立:不成立"是if...else的簡式!! 
    system("pause");
    return 0;
}
