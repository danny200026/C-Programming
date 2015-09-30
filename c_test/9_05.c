void res(int a,int b)
{
    int n,tmp=1;
    for(n=1;n<=b;n++)
    {
        tmp=tmp*a;
    }
    printf("The power(%d,%d)=%d\n",a,b,tmp);
}

int main()
{
    int a,b;
    printf("請輸入兩個整數:\n"); 
    scanf("%d %d",&a,&b);
    
    res(a,b);
    
    
    
    
    system("pause");
    return 0;
}
