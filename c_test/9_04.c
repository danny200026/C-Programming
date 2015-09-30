int main()
{
    int a,b,n,tmp=1;
    
    printf("請輸入兩個整數:\n"); 
    scanf("%d %d",&a,&b);
    
    for(n=1;n<=b;n++)
    {
        tmp=tmp*a;
    }
    
    printf("The power(%d,%d)=%d\n",a,b,tmp);
    
    
    system("pause");
    return 0;
}
